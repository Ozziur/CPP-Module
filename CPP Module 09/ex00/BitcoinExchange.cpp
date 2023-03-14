/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:01:25 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/14 17:34:31 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

///////
#include <iostream>

template<typename K, typename V>
void print_map(std::map<K, V> const &m)
{
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

//////

static void load_csv(std::map<std::string, float> &csv, std::ifstream &file)
{
	std::string line, beforeComma, afterComma;
	getline(file, line);
		
	while (getline(file, line))
	{
		size_t commaPos = line.find(",");
		beforeComma = line.substr(0, commaPos);
   		afterComma = line.substr(commaPos + 1);
		csv[beforeComma]= stof(afterComma);
	}
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream file;
	std::exception e;
	
	try{
		file.open("data.csv");
		if (file.fail()) throw e;
	}
	catch (const std::exception e)
	{
		std::cout << "data.csv don't found" << std::endl;
	}
	load_csv(this->csv, file);
	// print_map(this->csv);
	file.close();
}

BitcoinExchange::~BitcoinExchange()
{}

void BitcoinExchange::exchange(char *path)
{		
	std::ifstream inpfile;
	std::exception e;
	std::string line, beforeSep, afterSep;
	
	try{
		inpfile.open(path);
		if (inpfile.fail()) throw e;
	}
	catch (const std::exception e)
	{
		std::cout << "input file don't found" << std::endl;
	}
	getline(inpfile, line);
	if (line.compare("date | value") !=0)
	{
		std::cout << "bad heading" << std::endl;
		return ;
	}
	while (getline(inpfile, line))
	{
		size_t SepPos = line.find(" | ");
		if (SepPos ==  std::string::npos)
			std:: cout << "Separator \" | \" not found" << std::endl;
		else
		{
			beforeSep = line.substr(0, SepPos);
			afterSep = line.substr(SepPos + 3);
			std::cout << beforeSep << " => " << afterSep << " = " << std::endl;
		}
	}
}

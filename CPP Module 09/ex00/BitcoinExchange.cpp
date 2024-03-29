/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:01:25 by mruizzo           #+#    #+#             */
/*   Updated: 2023/04/17 18:12:53 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// ///////
// #include <iostream>

// template<typename K, typename V>
// void print_map(std::map<K, V> const &m)
// {
//     for (auto const &pair: m)
// 	{
//         std::cout << "{" << pair.first << ": " << pair.second << "}\n";
//     } 
// }

// //////

template<typename Iterator>
Iterator my_prev(Iterator it, typename std::iterator_traits<Iterator>::difference_type n = 1) {
    std::advance(it, -n);
    return it;
}

static std::string check_digits(const std::string& s) 
{
	for (std::string::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		if (!isdigit(*it) && *it != '-' && *it != '.')
		{
			throw std::invalid_argument("Error: The string contains a non-numeric character.");
		}
	}
	return s;
}

static bool	checkDateFormat(const std::string& date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	int year, month, day;
	if (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return false;
	if (month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	return true;
}

static void load_csv(std::map<std::string, float> &csv, std::ifstream &file)
{
	std::string line, beforeComma, afterComma;
	getline(file, line);
		
	while (getline(file, line))
	{
		size_t commaPos = line.find(",");
		beforeComma = line.substr(0, commaPos);
   		afterComma = line.substr(commaPos + 1);
		try {
		csv[beforeComma]= atof(afterComma.c_str());
		}catch (std::exception &e) {
		std::cout << "eccezione di atof" << std::endl;
		}
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
	catch (const std::exception &e)
	{
		std::cout << "data.csv don't found" << std::endl;
	}
	load_csv(this->csv, file);
	// print_map(this->csv);
	file.close();
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		this->csv = rhs.csv;
	return *this;
}

void BitcoinExchange::exchange(char *path)
{		
	std::ifstream inpfile;
	std::exception e;
	std::string line, beforeSep, afterSep;
	
	try{
		inpfile.open(path);
		if (inpfile.fail()) throw e;
	}
	catch (const std::exception &e)
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
		if (SepPos == std::string::npos)
		{
			std::cout << "Separator \" | \" not found" << std::endl;
			continue;
		}
		beforeSep = line.substr(0, SepPos);
		afterSep = line.substr(SepPos + 3);

		std::map<std::string, float>::iterator iter = this->csv.find(beforeSep);
		if (checkDateFormat(beforeSep) == false)
		{
			std::cout << "Error: date not valid." << std::endl;
			continue;
		}
		if (iter != this->csv.end())
		{
			try
			{
				if (atof(afterSep.c_str()) >= 0 && atof(afterSep.c_str()) <= 1000)
				{
					check_digits(afterSep);
					std::cout << beforeSep << " => " << afterSep << " = " << atof(afterSep.c_str()) * this->csv[beforeSep] << std::endl;
				}
				else
				{
					std::cout << "Error: not a significant number." << std::endl;
				}
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		else
		{
			std::map<std::string, float>::iterator lower = this->csv.lower_bound(beforeSep);
			if (lower == this->csv.begin())
			{
				std::cout << "No data available before " << beforeSep << std::endl;
			}
			else
			{
				std::map<std::string, float>::iterator prev = my_prev(lower);
				std::cout << "Data not found for " << beforeSep << ", using exchange rate from " << prev->first << std::endl;
				try
				{
					if (atof(afterSep.c_str()) >= 0 && atof(afterSep.c_str()) <= 1000)
					{
						check_digits(afterSep);
						std::cout << prev->first << " => " << afterSep << " = " << atof(afterSep.c_str()) * prev->second << std::endl;
					}
					else
					{
						std::cout << "Error: not a significant number." << std::endl;
					}
				}
				catch (const std::exception &e)
				{
					std::cout << e.what() << std::endl;
				}
			}
		}
	}
}
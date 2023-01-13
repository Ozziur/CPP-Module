/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:02:50 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/13 12:17:49 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

Convert::Convert()
{}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert& Convert::operator=(const Convert& other)
{
	(void)other;
	return *this;
}

void Convert::convert(const std::string& literal)
{
	std::string specialTypes[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	//if is a char
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		toChar = literal[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}

	//else if it is a number
	toInt = std::atoi(literal.c_str());

	// check if it is float or int / double
	if (literal[literal.length() - 1] == 'f')
	{
		toFloat = std::atof(literal.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else
	{
		toDouble = std::atof(literal.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; ++i)
	{
		if (literal == specialTypes[i])
			toChar = "imposible"; break;
	}
	if (toChar == "" && std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else if (toChar == "")
		toChar = "Non displayable";

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible")
		std::cout << "int: imposible" << std::endl;
	else
		std::cout << "int: " << toInt << std::endl;

	if (toChar == "imposible" && toFloat == 0)
	{
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	}
	else
	{
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0)
		{
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}

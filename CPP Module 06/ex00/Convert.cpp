/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:27 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 18:18:09 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _value("")
{
	_d_val.err = "\0";
	_i_val.err = "\0";
	_f_val.err = "\0";
	_c_val.err = "\0";
}

Convert::Convert(std::string value): _value(value)
{
	_d_val.err = "\0";
	_i_val.err = "\0";
	_f_val.err = "\0";
	_c_val.err = "\0";
}

Convert::~Convert()
{}

std::string itoa(int a)
{
	if (a == 0)
		return "0";
	std::string res = "";
	int tmp = a;
	while (tmp != 0)
	{
		res = (char)(tmp % 10 + '0') + res;
		tmp /= 10;
	}
	return res;
}

void Convert::setValue(std::string val)
{
	this->_value = val.length() == 1 && std::isalpha(val[0]) ? itoa((double)val[0]) : val;
	double tmp = std::stod(this->_value);
	if (!std::isinf(tmp) && !std::isnan(tmp) && (tmp > INT_MAX || tmp < INT_MIN))
		throw std::runtime_error("impossible");
	this->setDoubleVal(tmp);
}

void Convert::setDoubleVal(double value)
{
}

// Convert& Convert::operator=(const Convert &src)
// {
//     if ( this != &src )
// 	{
//         this->_c_val = src.getI();
//     }
//     return *this;
// }
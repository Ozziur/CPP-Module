/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:27 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 20:24:07 by mruizzo          ###   ########.fr       */
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

Convert &Convert::operator=(const Convert &src)
{
	this->_d_val.err = src._d_val.err;
	this->_i_val.err = src._i_val.err;
	this->_f_val.err = src._f_val.err;
	this->_c_val.err = src._c_val.err;

	this->_d_val.value = src._d_val.value;
	this->_i_val.value = src._i_val.value;
	this->_f_val.value = src._f_val.value;
	this->_c_val.value = src._c_val.value;
	return *this;
}

Convert::Convert(const Convert &src)
{
	*this = src;
}

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

// Set val
void	Convert::setDoubleVal(double value)
{
	this->_d_val.value = value;
}

void	Convert::setIntVal(int value)
{
	this->_i_val.value = value;
}

void	Convert::setFloatVal(float value)
{
	this->_f_val.value = value;
}

void	Convert::setCharVal(char value)
{
	this->_c_val.value = value;
}

// Convert
void	Convert::toInt(double val)
{
	int i = static_cast<int>(val);
	if (val > INT_MAX || val < INT_MIN || std::isinf(val) || std::isnan(val))
		throw std::runtime_error("impossible");
	else
		this->setIntVal(i);
}

void	Convert::toFloat(double val)
{
	int f = static_cast<float>(val);
	if (std::isnan(val))
		throw std::runtime_error("nanf");
	if (std::isinf(val) && val > 0)
		throw std::runtime_error("inf");
	else if (std::isinf(val) && val < 0)
		throw std::runtime_error("-inf");
	else
		this->setFloatVal(f);
}


void	Convert::toChar(double val)
{
	char c;

	if (val >= 32 && val <= 126)
		c = (char)val;
	else if (this->_value.length() > 1)
		throw std::runtime_error("impossible");
	else
		throw std::runtime_error("Non displayable");
	this->setCharVal(c);
}

// Set Err
void	Convert::setDoubleErr(std::string error)
{
	this->_d_val.err = error;
}

void	Convert::setIntErr(std::string error)
{
	this->_i_val.err = error;
}

void	Convert::setFloatErr(std::string error)
{
	this->_f_val.err = error;
}

void	Convert::setCharErr(std::string error)
{
	this->_c_val.err = error;
}

// Get err
std::string	Convert::getCharErr(void)
{
	return this->_c_val.err;
}

std::string	Convert::getFloatErr(void)
{
	return this->_f_val.err;
}

std::string	Convert::getIntErr(void)
{
	return this->_i_val.err;
}

std::string	Convert::getDoubleErr(void)
{
	return this->_d_val.err;
}

// Get val
void	Convert::getFloatVal(void)
{
	float f;
	std::string	err;

	err = this->getFloatErr();
	if (!err.empty())
	{
		std::cout << err;
		return ;
	}
	f = this->_f_val.value;
	if (f - static_cast<int>(f) != 0)
		std::cout << f << "f";
	else
		std::cout << f << ".0f";
}

void	Convert::getDoubleVal(void)
{
	double d;
	std::string	err;

	err = this->getDoubleErr();
	if (!err.empty())
	{
		std::cout << err;
		return ;
	}
	d = this->_d_val.value;
	if (d - static_cast<int>(d) != 0)
		std::cout << d;
	else
		std::cout << d << ".0";
}

void	Convert::getIntVal(void)
{
	std::string	err;

	err = this->getIntErr();
	if (!err.empty())
	{
		std::cout << err;
		return ;
	}
	std::cout << this->_i_val.value;
}

void	Convert::getCharVal(void)
{
	std::string	err;

	err = this->getCharErr();
	if (!err.empty())
	{
		std::cout << err;
		return ;
	}
	std::cout << "'" << this->_c_val.value << "'";
}

double	Convert::getDval(void)
{
	return this->_d_val.value;
}

//Convert operators
std::ostream & operator<<(std::ostream & stream , Convert & content)
{
	stream << "char: ";
	content.getCharVal();
	stream << std::endl;
	stream << "int: ";
	content.getIntVal();
	stream << std::endl;
	stream << "float: ";
	content.getFloatVal();
	stream << std::endl;
	stream << "double: ";
	content.getDoubleVal();
	stream << std::endl;
	return stream;
}

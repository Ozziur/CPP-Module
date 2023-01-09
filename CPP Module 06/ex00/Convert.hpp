/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:01:22 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 20:16:45 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string.h>
#include <cmath>
#include <limits.h>

template <typename T>
struct holder
{
	T	value;
	std::string	err;
};

class Convert
{
	private:
		std::string		_value;
		holder<double>	_d_val;
		holder<int>		_i_val;
		holder<float>	_f_val;
		holder<char>	_c_val;
	public:
		Convert();
		Convert(std::string value);
		~Convert();
		
		Convert(const Convert&src);
		virtual Convert& operator=(const Convert &src);

		// Set val
		void	setValue(std::string val);
		void	setDoubleVal(double value);
		void	setIntVal(int value);
		void	setFloatVal(float value);
		void	setCharVal(char value);

		// Get val
		void getFloatVal(void);
		void getDoubleVal(void);
		void getIntVal(void);
		void getCharVal(void);

		double getDval(void);

		// Convert
		void toInt(double val);
		void toFloat(double val);
		void toChar(double val);

		// Set err
		void setDoubleErr(std::string error);
		void setIntErr(std::string error);
		void setFloatErr(std::string error);
		void setCharErr(std::string error);

		// Get err
		std::string getCharErr(void);
		std::string getFloatErr(void);
		std::string getIntErr(void);
		std::string getDoubleErr(void);
};

std::ostream & operator<<(std::ostream & stream , Convert & content);

#endif
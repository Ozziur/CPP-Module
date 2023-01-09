/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:01:22 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 18:18:01 by mruizzo          ###   ########.fr       */
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
		Convert& Convert::operator=(const Convert &src);
		~Convert();

		void	setValue(std::string val);
		void	setDoubleVal(double value);
};

#endif
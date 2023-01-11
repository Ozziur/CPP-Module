/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:29:28 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/11 12:40:44 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
	T*				_array;
	unsigned int 	_size;
public:
	Array():_array(new T()), _size(0){};
	Array(unsigned int n):_array(new T[n]), _size(n){};
	Array(const Array &src): _array(new T[src.size()]), _size(src.size())
	{
		for (size_t i = 0; i < _size; i++)
		_arr[i] = rhs._arr[i];
	}
	~Array(){delate [] _array};

	

	unsigned int	size(void) const {return _size;}
};

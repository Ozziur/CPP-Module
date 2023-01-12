/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:29:28 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/12 13:10:17 by mruizzo          ###   ########.fr       */
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
		_array[i] = src._array[i];
	}
	~Array(){delete [] _array;};

	Array &operator=(const Array &src)
	{
		if (this != &src)
		{
			delete [] _array;
			_array = new T[src.size()];
			_size = src.size();
			for (size_t i = 0; i < src.size(); i++)
				_array[i] = src._array[i];
		}
		return *this;
	}

	T& operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds");
		return _array[index];
	}

	const T& operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds");
		return _array[index];
	}

	unsigned int	size(void) const {return _size;}

	class OutOfBoundsException : public std::exception
	{
        public:
            virtual const char* what() const throw() {return "Index is out of bounds";}
    };
};

template < typename T >
std::ostream& operator<<(std::ostream &out, const Array<T> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
        out << arr[i] << std::flush;
    return out;
}
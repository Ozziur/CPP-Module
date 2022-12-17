/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:43:56 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/17 16:52:30 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_p_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _fixed_p_value( n << _raw_bit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _fixed_p_value(std::roundf(n *(1 << _raw_bit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if(this != &rhs)
		this->_fixed_p_value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->_fixed_p_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_p_value = raw;
}

int Fixed::toInt( void ) const
{
	return this->_fixed_p_value >>_raw_bit;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _raw_bit);
}

std::ostream & operator<<(std::ostream &o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

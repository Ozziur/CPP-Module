/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:38:25 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/17 19:10:09 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_p_value(0)
{}

Fixed::Fixed(const int n): _fixed_p_value( n << _raw_bit)
{}

Fixed::Fixed(const float n): _fixed_p_value(std::roundf(n *(1 << _raw_bit)))
{}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if(this != &rhs)
		this->_fixed_p_value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{}

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

//comparison

bool Fixed::operator>(const Fixed &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

//math

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

//inc/dec

Fixed&	Fixed::operator++(void)
{
	++this->_fixed_p_value;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._fixed_p_value = this->_fixed_p_value++;
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixed_p_value;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._fixed_p_value = this->_fixed_p_value--;
	return tmp;
}

//min/max

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

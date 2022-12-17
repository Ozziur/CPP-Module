/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:43:40 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/17 15:57:49 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _fixed_p_value;
	static const int    _raw_bit = 8;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &rhs);
	Fixed& operator=(const Fixed &rhs);
	~Fixed();

	float toFloat( void ) const;
	int toInt( void ) const;
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream &o, Fixed const & i);

#endif
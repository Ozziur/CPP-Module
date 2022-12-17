/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:43:40 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/17 13:56:18 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
    int                 _fixed_p_value;
    static const int    _raw_bit = 8;
public:
    Fixed();
    Fixed(const Fixed &rhs);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

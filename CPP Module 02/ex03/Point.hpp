/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:19:35 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/18 15:09:27 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &src);
	~Point();

	Point&  operator=(const Point &rhs);
	
	Fixed getX(void) const;
    Fixed getY(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif
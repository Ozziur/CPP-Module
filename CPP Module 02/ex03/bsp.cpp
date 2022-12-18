/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:18:55 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/18 15:13:29 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed   abs_value(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed    area(Point const a, Point const b, Point const c)
{
	return (((a.getX() * ( b.getY() - c.getY())) +
             (b.getX() * (c.getY() - a.getY())) +
             (c.getX() * ( a.getY() - b.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	abcArea = abs_value(area(a,b,c));
	Fixed	abpArea = abs_value(area(a,b,p));
	Fixed	acpArea = abs_value(area(a,c,p));
	Fixed	bcpArea = abs_value(area(b,c,p));

	return(abcArea == abpArea + acpArea + bcpArea);
}
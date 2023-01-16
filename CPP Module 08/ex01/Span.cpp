/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:18:50 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/16 12:40:19 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0)
{}

Span::Span(const unsigned int n): _n(n)
{}

Span::Span(const Span &src)
{
	*this = src;	
}

Span::~Span() {}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_list = src._list;
		this->_n = src._n;
	}
	return (*this);
}

void Span::addNumber(int)
{
}

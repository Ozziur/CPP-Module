/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:18:50 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/16 15:20:45 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0)
{}

Span::Span(const unsigned int n): _size(n)
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
		this->_size = src._size;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_list.size() > _size)
		throw std::out_of_range("List is full");
	_list.push_back(n);
}

void Span::addNumber(std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd)
{
	if (_list.size() > _size)
		throw std::out_of_range("List is full");
	_list.insert( _list.end(), itBegin, itEnd);
}

unsigned int Span::longestSpan() const
{
	if ( _list.size() < 2 )
        throw std::out_of_range("List is empty");
		return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}


unsigned int Span::shortestSpan() const
{
	if ( _list.size() < 2 )
        throw std::out_of_range("List is empty");
	unsigned int  min = Span::longestSpan();
    for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it) 
	{
        for (std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2)
		{
            if (it == it2)
				continue;
            if (std::abs(*it2 - *it) < static_cast<int>(min))
                min = std::abs(*it2 - *it);
        }
    }
    return min;
}

const std::list<int>* Span::getList(void) const
{
    return &_list;
}

std::ostream &operator<<(std::ostream &out, const Span &src)
{
	for (std::list<int>::const_iterator it = src.getList()->begin(); it != src.getList()->end(); ++it )
        out << *it << " ";
    return out;
}

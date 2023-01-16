/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:31 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/16 12:18:21 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>

class Span
{
private:
	std::list<int>	_list;
    unsigned int	_n;
public:
	Span();
	Span(const unsigned int n);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	void	addNumber(int);
	void	addNumber(std::list<int>::const_iterator, std::list<int>::const_iterator);
	
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

std::ostream &operator<<(std::ostream &out, const Span &src);

#endif
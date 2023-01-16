/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:31 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/16 15:21:01 by mruizzo          ###   ########.fr       */
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
    unsigned int	_size;
public:
	Span();
	Span(const unsigned int n);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	void	addNumber(int n);
	void	addNumber(std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd);
	
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	
	const std::list<int> *getList(void) const;
};

std::ostream &operator<<(std::ostream &out, const Span &src);

#endif
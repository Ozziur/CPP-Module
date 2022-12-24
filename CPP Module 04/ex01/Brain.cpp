/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:49:36 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/24 16:05:44 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain copy called" << std::endl;
	if ( this != &rhs ) 
    {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

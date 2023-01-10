/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:33:43 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 16:30:53 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << this->_type << " Constrctor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->_type << " Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAO!!!" << std::endl;
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}
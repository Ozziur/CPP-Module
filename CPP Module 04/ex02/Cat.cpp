/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:33:43 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/25 17:05:12 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	std::cout << this->_type << " Constrctor Called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc &error)
	{
		std::cout << "Memory Allocation is failed : " << error.what() << std::endl;
	}
}

Cat::~Cat()
{
	std::cout << this->_type << " Destructor Called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain( *src._brain );
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAO!!!" << std::endl;
}

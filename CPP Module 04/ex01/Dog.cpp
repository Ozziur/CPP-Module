/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:32 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/24 16:24:26 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
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

Dog::~Dog()
{
	std::cout << this->_type << " Destructor Called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Cat copy called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain( *src._brain );
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "BAU!!!" << std::endl;
}

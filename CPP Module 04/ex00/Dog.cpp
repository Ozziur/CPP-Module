/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:32 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 16:26:15 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << this->_type << " Constrctor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->_type << " Destructor Called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "BAU!!!" << std::endl;
}

Dog::Dog(const Dog& src): Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_type = rhs._type;
    return *this;
}
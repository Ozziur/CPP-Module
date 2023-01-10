/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:54:07 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 16:31:30 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}
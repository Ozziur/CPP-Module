/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:33:43 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/24 14:38:22 by mruizzo          ###   ########.fr       */
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

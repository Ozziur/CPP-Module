/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:32 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/23 17:32:44 by mruizzo          ###   ########.fr       */
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

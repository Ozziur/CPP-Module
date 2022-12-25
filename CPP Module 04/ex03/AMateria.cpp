/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:20:17 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/25 18:33:51 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("raw")
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

// AMateria* AMateria::clone() const
// {
// 	return (AMateria*)this;
// }

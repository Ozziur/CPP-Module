/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:17:04 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 20:31:48 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
}

void    HumanB::setWeapon( Weapon& weapon )
{
    this->_weapon = &weapon;
}

void	HumanB::attack(void) const 
{
	if (this->_weapon->getType() != "" && this->_weapon != NULL)
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}

HumanB::~HumanB()
{
}

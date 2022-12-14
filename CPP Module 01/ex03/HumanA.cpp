/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:06:13 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 20:24:40 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) 
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const 
{
	if (this->_weapon.getType() != "") {
		std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	} else {
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}

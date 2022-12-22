/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:04:55 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/22 11:48:15 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap()
{
	this->_name = this->ClapTrap::_name;
	this->ClapTrap::_name = this->_name + "_clap_name";

	FragTrap::_HP = 100;
	ScavTrap::_SP = 50;
	FragTrap::_ATK = 30;

	std::cout << "I'm " << this->_name << ", beautiful as Butt Stallion." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_HP = 100;
	ScavTrap::_SP = 50;
	FragTrap::_ATK = 30;

	std::cout << "I'm " << this->_name << ", beautiful as Butt Stallion." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ": Butt Stallion says hello." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I? " << this->_name << " or " << this->ClapTrap::_name << "." << std::endl;
}

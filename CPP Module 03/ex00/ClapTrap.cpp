/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:42 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/20 13:00:35 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Claptrap"), _HP(10), _SP(10), _ATK(0)
{
	std::cout << "I am a CL4P-TP steward robot, but my friends call me " << _name 
	<< ".\nOr they would, if any of them were still alive. Or had existed in the first place!" 
	<< std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _HP(10), _SP(10), _ATK(0)
{
	std::cout << "I am a CL4P-TP steward robot, but my friends call me " << _name 
	<< ".\nOr they would, if any of them were still alive. Or had existed in the first place!" 
	<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Good thing I don't have a soul!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
	std::cout <<_name << "You enjoying the party, minion?" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_SP = rhs._SP;
	this->_ATK = rhs._ATK;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if(_SP <= 0)
	{
		std::cout << this->_name << ": Minion I'm out of SP." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ATK << " points of damage!" << std::endl;
	_SP -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP <= amount)
	{
		std::cout << _name << ": I'll die the way I lived: annoying!" << std::endl;
		_HP = 0;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	_HP -= amount;
	if (_HP <= 0)
	{
		std::cout << _name << ": I'll die the way I lived: annoying!" << std::endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_SP <= 0)
	{
		std::cout << this->_name << ": Minion I'm out of SP." << std::endl;
		return;
	}
	std::cout << _name << ": Sweet life juice! +" << amount << "HP!" << std::endl;
	_SP -= 1;
	_HP += amount;
}

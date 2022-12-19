/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:42 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/19 16:00:50 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Claptrap"), _HP(10), _SP(10), _ATK(0)
{
	std::cout << "I am a CL4P-TP steward robot, but my friends call me " << _name 
	<< " Or they would, if any of them were still alive. Or had existed in the first place!" 
	<< std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _HP(10), _SP(10), _ATK(0)
{
	std::cout << "I am a CL4P-TP steward robot, but my friends call me " << _name 
	<< " Or they would, if any of them were still alive. Or had existed in the first place!" 
	<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Good thing I don't have a soul!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "You enjoying the party, minion?" << std::endl;
	*this = rhs;
}

ClapTrap ClapTrap::operator=(const ClapTrap &rhs)
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
		std::cout << this->_name << ": Minions I'm out of energy"
		return;
	}
}

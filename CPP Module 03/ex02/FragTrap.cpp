/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:48:15 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 19:07:15 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_HP = 100;
	this->_SP = 100;
	this->_ATK = 30;

	std::cout << "I am " << _name << ", the most leathal Fragtrap ninja in the universe." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_HP = 100;
	this->_SP = 100;
	this->_ATK = 30;

	std::cout << "I am " << _name << ", the most leathal Fragtrap ninja in the universe." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << ": I'm to pretty to die!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << ": You want me? To join you? I am SO excited. We will be best friends. High Five!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs): ClapTrap(rhs)
{
	*this = rhs;
	std::cout << _name << ": (Im a frag) You enjoying the party, minion?" << std::endl;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap& equals)
{
	this->_name = equals._name;
	this->_HP = equals._HP;
	this->_SP = equals._SP;
	this->_ATK = equals._ATK;
	return (*this);
}
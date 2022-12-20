/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:48:15 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/20 12:35:01 by mruizzo          ###   ########.fr       */
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


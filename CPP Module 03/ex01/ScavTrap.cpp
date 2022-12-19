/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:28:10 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/19 19:21:50 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_name = "SC4V-TP";
	this->_HP = 100;
	this->_SP = 50;
	this->_ATK = 20;
	
	std::cout << "I am" << this->_name << " a ScavTrap unit." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_HP = 100;
	this->_SP = 50;
	this->_ATK = 20;

	std::cout << "I am" << this->_name << " a ScavTrap unit." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Good thing I don't have a soul! And Imagination!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << ": Gate keeper mode on." << std::endl;
}

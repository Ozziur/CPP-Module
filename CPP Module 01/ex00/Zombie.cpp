/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:26:18 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/05 21:25:48 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

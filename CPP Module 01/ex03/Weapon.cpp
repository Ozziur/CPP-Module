/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:04:12 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 20:04:40 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _Type)
{
	this->setType(_Type);
}

const  std::string& Weapon::getType(void)
{
    return this->_Type;
}

void Weapon::setType(std::string newType)
{
	this->_Type = newType;
}
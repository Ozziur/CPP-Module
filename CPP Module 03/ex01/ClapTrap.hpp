/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:54 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/19 19:25:18 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_HP;
	unsigned int	_SP;
	unsigned int	_ATK;
	
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(const ClapTrap&);
	ClapTrap operator=(const ClapTrap &rhs);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
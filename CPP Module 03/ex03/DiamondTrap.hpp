/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:58:10 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 12:38:39 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
	
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();
	DiamondTrap(DiamondTrap &src);
	DiamondTrap &operator=(const DiamondTrap &equals);
};

#endif
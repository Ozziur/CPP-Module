/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:29 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 18:52:58 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap scav;
	ScavTrap scav2("AHHHHH!");
	ScavTrap scav3(scav);

	scav.attack("Lilith");
	scav.beRepaired(2);
	scav.takeDamage(10);
	scav.guardGate();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:29 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/19 19:32:16 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap scav;
	ScavTrap scav2("AHHHHH!");

	scav.attack("Lilith");
	scav.beRepaired(2);
	scav.takeDamage(10);
	scav.guardGate();
}
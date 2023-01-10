/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:29 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 12:42:20 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap uno;
    DiamondTrap due("XXXTENTACION");
    DiamondTrap tre(due);

    uno.whoAmI();
    due.whoAmI();
    tre.whoAmI();

    uno.attack("the Vault");
    uno.takeDamage(10);
    uno.beRepaired(10);

    return EXIT_SUCCESS;
}
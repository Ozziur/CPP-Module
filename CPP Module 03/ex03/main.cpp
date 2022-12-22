/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:29 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/22 11:51:09 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap uno;
    DiamondTrap due("vamos");
    DiamondTrap tre(uno);

    uno.whoAmI();
    due.whoAmI();
    tre.whoAmI();

    uno.attack("the Vault");
    uno.takeDamage( 10 );
    uno.beRepaired( 10 );

    return EXIT_SUCCESS;
}
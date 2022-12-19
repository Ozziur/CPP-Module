/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:29 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/19 18:10:22 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap original;
    ClapTrap dummy("dummy");

    original.attack("dummy");
    dummy.takeDamage(99999);
    dummy.beRepaired(10);
}
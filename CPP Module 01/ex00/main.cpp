/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:04 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 16:08:01 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name;

	std::cout << "STACK Zombie name: " << std::flush;
	std::cin >> name;
	Zombie zombi_stack(name);

	std::cout << "HEAP Zombie name: " << std::flush;
	std::cin >> name;
	Zombie *zombi_heap = newZombie(name);
	zombi_heap->announce();
	delete zombi_heap;

	randomChump("Luca Dirisio");
}
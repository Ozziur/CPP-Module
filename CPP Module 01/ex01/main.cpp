/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:41:24 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 16:56:46 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N;

	std::cout << "How many zombies do you want in your horde? " << std::flush;
	std::cin >> N;
	
	Zombie  *horde = zombieHorde(N, "Tiromancino");
	for (size_t i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}
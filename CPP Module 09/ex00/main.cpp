/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:25:59 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/17 14:59:35 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	BitcoinExchange bie;

	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
	}
	else
	{

		bie.exchange(argv[1]);

	}
}
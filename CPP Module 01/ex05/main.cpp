/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:13:19 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/05 17:59:20 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;
	do
	{
		std::cout << "Enter a level (ONLY CAPS): " << std::endl;
		std::cin >> input;
		if (std::cin.eof())
        {
            break ;
            return (0);
        }
		harl.complain(input);
	} while (input.compare("EXIT"));
	return EXIT_SUCCESS;    
}
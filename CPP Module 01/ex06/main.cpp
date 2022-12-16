/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:13:19 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/16 17:54:19 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return(std::cout << "Error!!\n" , EXIT_FAILURE);
	
	std::string input = argv[1];
	Harl harl;

	harl.complain(input);

	return EXIT_SUCCESS;    
}
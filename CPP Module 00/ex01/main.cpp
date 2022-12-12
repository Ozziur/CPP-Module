/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:35:06 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/12 19:35:06 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
//#include <limits>
#include <iostream>

int main(void)
{
	PhoneBook phone;
	std::string input;

	while (input.compare("EXIT"))
	{
		phone.welcome();
		std::cout << "> " << std::flush;
		std::cin >> input;
		if(input.compare("ADD") == 0)
			phone.addContact();
		if(input.compare("SEARCH") == 0)
		{
			phone.print();
			phone.search();
		}
	}
	return (0);
}
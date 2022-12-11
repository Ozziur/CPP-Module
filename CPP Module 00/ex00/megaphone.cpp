/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:53:42 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/11 19:53:42 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char** argv)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		for (size_t i = 1; i < ac; i++)
		{
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char) std::toupper(str[j]);			
			if(i < ac -1)
				std::cout << (char)' ';
		}
	}
	std::cout << std::endl;
	return (0);
}
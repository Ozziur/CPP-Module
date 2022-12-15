/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:07:03 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/15 15:48:08 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr<< "Error" << std::endl;
		return EXIT_FAILURE;
	}
	SedV2 sed2(argv[1]);
	sed2.replace(argv[2], argv[3]);
	return EXIT_SUCCESS;
}
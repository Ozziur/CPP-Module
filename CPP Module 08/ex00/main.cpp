/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:42:45 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/12 14:43:32 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

int main( int ac, char ** av )
{
	if ( ac != 2 )
		return EXIT_FAILURE;
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::vector< int >      vect( arr, arr + sizeof( arr ) / sizeof( int ) );
	std::list< int >        list( arr, arr + sizeof( arr ) / sizeof( int ) );

	easyfind( vect, std::atoi( av[1] ));
	easyfind( list, std::atoi( av[1] ));

	return EXIT_SUCCESS;
}
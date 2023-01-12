/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:40:50 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/12 14:50:51 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void	easyfind(T &container, int value)
{
	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Found." << std::endl;
	else
		std::cout << "Not found." << std::endl;
}
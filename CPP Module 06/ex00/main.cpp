/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:58:30 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 19:59:29 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	Convert	converter;
	double	value;

	if (argc < 2 || argc > 2)
	{
		std::cerr << "Please insert a correct number of params. Ex \"./convert [number|string|float]\"" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		converter.setValue(argv[1]);
	}
	catch(const std::exception& e)
	{
		converter.setDoubleErr("Conversion is impossible");
		converter.setIntErr("Conversion is impossible");
		converter.setFloatErr("Conversion is impossible");
	}

	value = converter.getDval();
	try
	{
		converter.toInt(value);
	}
	catch(const std::exception& e)
	{
		converter.setIntErr(e.what());
	}

	try
	{
		converter.toFloat(value);
	}
	catch(const std::exception& e)
	{
		converter.setFloatErr(e.what());
	}

	try
	{
		converter.toChar(value);
	}
	catch(const std::exception& e)
	{
		converter.setCharErr(e.what());
	}
	std::cout << converter << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:30:54 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/16 10:59:21 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
	{
        std::cerr << "Error: expected one argument with the RPN expression." << std::endl;
        return 1;
    }

    RPN rpn(argv[1]);
    if (rpn.evaluate())
        return 0;
	else
        return 1;
}
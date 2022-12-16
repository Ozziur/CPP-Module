/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:13:19 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/16 17:41:50 by mruizzo          ###   ########.fr       */
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
        harl.complain(input);
    } while (input.compare("EXIT"));
    return EXIT_SUCCESS;    
}
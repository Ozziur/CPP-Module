/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:13:19 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/15 18:00:17 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::string input;
    Harl harl;
    do
    {
        std::cout << "Enter a level: " << std::endl;
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));
    return EXIT_SUCCESS;    
}
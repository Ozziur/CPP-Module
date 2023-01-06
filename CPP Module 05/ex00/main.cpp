/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:10:26 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/06 17:05:24 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try {
		Bureaucrat bureaucrat("Kid Cudi", 1);

		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		// bureaucrat.decrementGrade();
	} catch (Bureaucrat::GradeTooHigh &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
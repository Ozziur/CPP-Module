/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:10:26 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/12 18:00:38 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

	try {
		Bureaucrat bureaucrat("Zero Assoluto",100);
		Form form("Per Dimenticare", 1, 150);

		bureaucrat.signForm(form);
		
		Form form2;
		form2 = form;

		std::cout <<form.getSigned() << std::endl;
		std::cout <<form2.getSigned() << std::endl;

		std::cout << form << std::endl;
		std::cout << form2 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
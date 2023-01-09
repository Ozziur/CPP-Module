/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:49:22 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 01:49:22 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &src)
{
	(void) src;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form*    forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	for (int i(0); i < 3; i++)
        if ( name == formNames[i] )
		{
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
	std::cout << "Intern: No one explained to me how to do it" << std::endl;
    return nullptr;
}

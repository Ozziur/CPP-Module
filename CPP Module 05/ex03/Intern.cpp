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

static Form*	makePresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
static Form*	makeRobotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target)); }
static Form*	makeShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }

Form *Intern::makeForm(std::string name, std::string target)
{
	Form* form;
	typedef Form* (*func)(std::string const &target);
	typedef struct {std::string form_name; func function;} FormTypes;
	
	form = NULL;
	FormTypes	forms[] = 
	{
		{"presidential pardon", &makePresidentialPardonForm},
		{"robotomy request", &makeRobotomyRequestForm},
		{"shrubbery creation", &makeShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
		if (forms[i].form_name == name)
		{
			form = forms[i].function(target); // function corrisponde alla funzione nella struct forms
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	std::cout << "Intern is not able to create the form asked." << std::endl;
	return (form);
}

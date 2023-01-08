/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:23:41 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/08 23:23:41 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request Form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src ) : Form(src), _target(src._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm& src)
{
	(void)src;
	return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLow();
	else
	{
		if (rand() % 2 == 0 )//numero casuale
			std::cout << "\a\a\a\a\aBZZZZZT! " << _target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
	}
}
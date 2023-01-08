/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:22:59 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/08 23:22:59 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form( "PresidentialPardonForm", 25, 5 ), _target( target )
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form( src ), _target( src._target )
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    (void)src;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw Form::GradeTooLow();
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
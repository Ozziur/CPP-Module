/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:09:59 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 00:12:29 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHigh();
	if (grade > 150)
		throw Bureaucrat::GradeTooLow();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _grade(src._grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if ( this != &src )
		_grade = src.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if ((_grade - 1 < 1))
		throw Bureaucrat::GradeTooHigh();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if ((_grade + 1 > 150))
		throw Bureaucrat::GradeTooLow();
		_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    }
	catch (Form::GradeTooLow &e)
	{
        std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() <<" Grade " << src.getGrade();
	return out;
}

void    Bureaucrat::executeForm( const Form &form ) const
{
    try
	{
        form.execute(*this);
    }
	catch (std::exception& e)
	{
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
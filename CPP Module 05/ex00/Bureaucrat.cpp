/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:09:59 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/06 17:05:16 by mruizzo          ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() <<" Grade " << src.getGrade();
	return out;
}

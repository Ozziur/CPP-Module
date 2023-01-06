/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:29:52 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/06 18:06:37 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign): _name( name ), _gradeToSign( gradeToSign ), _gradeToExe(0)
{
	if ( gradeToSign < 1 )
        throw Form::GradeTooHigh();
    if ( gradeToSign > 150 )
        throw Form::GradeTooLow();
}

Form::Form(const Form &src): _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExe(src.getGradeToExecute())
{}

Form::~Form()
{}

Form &Form::operator=(const Form &src)
{
	if ( this != &src )
        _signed = src.getSigned();
    return *this;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExe;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLow();
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << "------------- Form Info -------------" << std::endl;
    out << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute();
    return out;
}

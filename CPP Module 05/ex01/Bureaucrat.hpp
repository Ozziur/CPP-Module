/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:10:11 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/06 18:10:23 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string   _name;
	int                 _grade;
	Bureaucrat();
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);

	std::string getName() const;
	int         getGrade() const;

	void        incrementGrade();
	void        decrementGrade();

	void        signForm(Form& form);

	class GradeTooHigh: public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade To High";}
	};
	class GradeTooLow: public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade To Low";}
	};
};

std::ostream	&operator<<(std::ostream& out, const Bureaucrat& src);

#endif
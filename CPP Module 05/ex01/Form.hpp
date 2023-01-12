/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:31:36 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/12 17:58:14 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
	const std::string	_name;
	bool				_signed;
	const int	 		_gradeToSign;
	const int	 		_gradeToExe;
public:
	Form();
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	Form(const std::string& name, int gradeToSign);
	Form(const Form& src);
	~Form();

	Form &operator=(const Form &src);

	std::string	getName() const;
	bool        getSigned() const;
	int         getGradeToSign() const;
	int			getGradeToExecute() const;

	void        beSigned(const Bureaucrat& bureaucrat);

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

std::ostream	&operator<<(std::ostream& out, const Form &src);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:10:11 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/04 17:03:08 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string   _name;
    int                 _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);
};

#endif
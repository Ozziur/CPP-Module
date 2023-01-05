/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:57:03 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/12 19:57:03 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_getInput(std::string str)
{
	std::string	input;
	bool 		valid = false;

	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
            return ("");
		if(std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std:: cout << "Invalid input" << std::endl;
		}
	} while (!valid);
	return (input);
}

bool Contact::_str_is_digit(std::string str)
{
	size_t	i = 0;

	while (str[i])
	{
		if (false == std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

void    Contact::init(void)
{
	std::cin.ignore();
	this->_first_name = _getInput("First Name: ");
	this->_last_name = _getInput("Last Name: ");
	this->_nickname = _getInput("Nickname: ");
	do{
		this->_phone_number = _getInput("Phone Number: ");
	}while(_str_is_digit(this->_phone_number) == false);
	this->_secret = _getInput("Darkest Secret: ");
	std::cout << std::endl;
}

void    Contact::setCode(int i)
{
    this->_code = i;
}

std::string Contact::_print_ten(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return (str); 
}

void	Contact::view(int code)
{
	if (this->_first_name.empty())
		return ;
	std::cout << "|" << std::setw(10) << code << std::flush;
    std::cout << "|" << std::setw(10) << this->_print_ten(this->_first_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_print_ten(this->_last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_print_ten(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int code)
{
	if (this->_first_name.empty())
		return ;
	std::cout << "|" << std::endl;
	std::cout << "---> Contact #" << code << " <---" << std::endl;
	std::cout << "First Name:\t" << this->_first_name<< std::endl;
	std::cout << "Last Name:\t" << this->_last_name<< std::endl;
	std::cout << "Nickame:\t" << this->_nickname<< std::endl;
}

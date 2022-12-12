/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:49:40 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/12 19:49:40 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::welcome(void)
{
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int i;
	this->_contact[i % 8].init();
	this->_contact[i % 8].setCode(i % 8);
	i++;
}

void	PhoneBook::print()
{
	std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->_contact[i].view(i);
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:45:29 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/27 16:12:35 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (slots[i])
			delete slots[i];
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			slots[i] = src.slots[i];
	}
	return *this;
}

AMateria *MateriaSource::getMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (slots[i] && slots[i]->getType() == type)
			return slots[i];
	return NULL;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (slots[i] && slots[i]->getType() == type)
			return slots[i]->clone();
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (slots[i] == NULL)
		{
			slots[i] = m;
			return;
		}
}

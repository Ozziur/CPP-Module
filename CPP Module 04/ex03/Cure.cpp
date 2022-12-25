/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:54:30 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/25 18:59:49 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure const &src): AMateria("cure")
{
    *this = src;
}

Cure &Cure::operator=(Cure const &src)
{
    if (this != &src)
        this->_type = src._type;
    return *this;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

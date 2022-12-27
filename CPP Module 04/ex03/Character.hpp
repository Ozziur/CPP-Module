/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:53:07 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/27 16:06:04 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria    *_inventory[4];

public:
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	~Character();

	Character&          operator=(Character const &rhs);

	std::string const&  getName() const;
	void                equip(AMateria* m);
	void                unequip(int idx);
	void                use(int idx, ICharacter& target);
};

#endif 
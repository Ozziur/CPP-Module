/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:53:35 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 20:25:08 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void) const;
    ~HumanB();
};
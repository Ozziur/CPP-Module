/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:28:24 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 19:06:24 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &rhs);
    ~ScavTrap();
    
    ScavTrap &operator=(const ScavTrap& equals);
    
    void attack(const std::string& target);
    void guardGate();
};


#endif
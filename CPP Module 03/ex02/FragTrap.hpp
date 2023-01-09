/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:48:53 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/09 19:07:42 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	
	void highFivesGuys(void);
	FragTrap(const FragTrap &rhs);
	FragTrap &operator=(const FragTrap &equals);
};

#endif
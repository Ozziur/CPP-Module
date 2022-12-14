/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:23:11 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 15:47:03 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void); 
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

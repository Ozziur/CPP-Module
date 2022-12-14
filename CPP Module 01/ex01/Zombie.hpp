/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:23:11 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/14 17:08:01 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setZombie(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:47 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 16:27:10 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
    Dog();
    ~Dog();
    
    Dog(const Dog& src);
    Dog& operator=(const Dog& rhs);

    void   makeSound( void ) const;
};

#endif
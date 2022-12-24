/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:47 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/24 16:21:30 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain   *_brain;
public:
	Dog();
	~Dog();

	Dog(const Dog &src);
	Dog& operator=(const Dog &src);
	
	void   makeSound( void ) const;
};

#endif
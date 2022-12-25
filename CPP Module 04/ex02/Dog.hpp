/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:47 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/25 17:04:02 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
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
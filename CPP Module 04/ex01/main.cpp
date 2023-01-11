/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:13:11 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/11 17:49:43 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"


int main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Dog basic;
	Dog tmp = basic;
	
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ) {
		animals[i]->makeSound();
	}
	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
	}

	return 0;
}
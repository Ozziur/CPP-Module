/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:42:50 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/11 17:42:36 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();

	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator=(const WrongAnimal& rhs);

	void			makeSound() const;
	std::string     getType() const; 
};

#endif
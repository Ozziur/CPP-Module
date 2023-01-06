/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:52:29 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/05 21:22:06 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(std::string type);
	virtual ~AAnimal( void );

    AAnimal( const AAnimal& src );
    AAnimal& operator=( const AAnimal& rhs );

	virtual void    makeSound( void ) const = 0;
    std::string     getType( void ) const;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:34:09 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/25 17:04:07 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_brain;
public:
	Cat();
	~Cat();

	Cat(const Cat& src);
	Cat& operator=(const Cat &src);
	
	void   makeSound() const;
};

#endif
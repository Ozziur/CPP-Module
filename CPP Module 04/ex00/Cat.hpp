/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:34:09 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 16:26:58 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	~Cat();

	Cat(const Cat& src);
	Cat& operator=(const Cat& rhs);
	
	void   makeSound() const;
};

#endif
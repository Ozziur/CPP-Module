/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:43:01 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/27 16:12:23 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*       slots[4];

	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(MateriaSource const& src);
		MateriaSource   &operator=(MateriaSource const &src);

		AMateria*       getMateria(std::string const &type);
		AMateria*       createMateria(std::string const &type);
		void            learnMateria(AMateria *m);
};

#endif
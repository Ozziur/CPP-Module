/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:27:13 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/18 16:09:24 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ciao, sono il Michele del presente(dal tuo punto di vista il Michele del passato),
e ti sto scrivendo perchè conosco la tua memoria di merda e ti scorderai la strategia
che stai utilizando per finire questo esercizio. Il punto è semplice: calcola l'area 
del triangolo ABC. Poi calcoli l'area del triangolo ABP, ACP, CBP. Se la loro somma è uguale a 
ABC il triangolo è dentro, se no è fuori. Ah, evita di cancellare sto commento: la norma non esiste
e devi spiegare che cazzo stai facendo. Inoltre così sembrerai un sacco simpatico.*/

#include "Point.hpp"

int main(void)
{
	float x,y;

	std::cout << "Point A (x,y): " << std::flush;
	std::cin >> x >> y;
	Point a (x,y);

	std::cout << "Point B (x y): " << std::flush;
	std::cin >> x >> y;
	Point b (x,y);

	std::cout << "Point C (x y): " << std::flush;
	std::cin >> x >> y;
	Point c (x,y);

	std::cout << "Point P (x y): " << std::flush;
	std::cin >> x >> y;
	Point p (x,y);

	if ( bsp(a,b,c,p) == true )
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}
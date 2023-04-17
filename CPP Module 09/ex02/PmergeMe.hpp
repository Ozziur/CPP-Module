/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:28:24 by mruizzo           #+#    #+#             */
/*   Updated: 2023/04/17 18:05:20 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>

template<typename Iterator>
Iterator my_prev(Iterator it, typename std::iterator_traits<Iterator>::difference_type n = 1) {
    std::advance(it, -n);
    return it;
}


template<typename Iterator>
void merge(Iterator begin, Iterator middle, Iterator end)
{
	std::inplace_merge(begin, middle, end); //fonde due sequenze ordinate in una singola sequenza ordinata
}

template<typename Iterator>
void insertion_sort(Iterator begin, Iterator end)
{
	for (Iterator i = begin; i != end; ++i)
	{
		Iterator j = i;
		while (j != begin && *j < *(my_prev(j)))
		{
			std::iter_swap(j, my_prev(j));
			--j;
		}
	}
}

template<typename Iterator>
void merge_insert_sort(Iterator begin, Iterator end, int cutoff = 10)
{
	if (std::distance(begin, end) <= cutoff)
	{
		insertion_sort(begin, end); //Se la lunghezza della sequenza rappresentata dall'intervallo tra begin e end è inferiore o uguale a cutoff fa insertion_sort per ordinare la sequenza.
	}
	else
	{
		Iterator middle = begin;
		std::advance(middle, std::distance(begin, end) / 2); //divido a metà e faccio ricorsione, advance incrementa l'iter middle
		merge_insert_sort(begin, middle, cutoff);
		merge_insert_sort(middle, end, cutoff);
		merge(begin, middle, end); // fonde
	}
}

#endif
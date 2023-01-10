/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:56:26 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 18:09:59 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T* arr, int length, void (*func)(T &))
{
    for (int i = 0; i < length; i++)
        func(arr[i]);
}

template <typename T>
void print(T &i)
{std::cout << i << std::endl;}
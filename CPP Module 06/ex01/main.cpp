/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:54:14 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/10 12:08:25 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	item;
	int			quantity;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data*>(raw));
}

int main()
{
	Data *data = new Data;

	data->item = "buste";
    data->quantity = 20;

    std::cout << "Item: " << deserialize(serialize(data))->item << std::endl;
    std::cout << "Quantity: " << deserialize(serialize(data))->quantity << std::endl;

	delete data;

	return EXIT_SUCCESS;
}

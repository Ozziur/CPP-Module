/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:53:28 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/14 18:28:40 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
#include <map>


class BitcoinExchange
{
private:
	std::map<std::string, float> csv;
public:
	BitcoinExchange();
	~BitcoinExchange();

	// BitcoinExchange( const BitcoinExchange& src );
    // BitcoinExchange& operator=( const BitcoinExchange& rhs );

	void exchange(char* path);
};

#endif
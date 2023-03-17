/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:53:28 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/17 15:11:12 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
#include <map>
#include <stdexcept>


class BitcoinExchange
{
private:
	std::map<std::string, float> csv;
public:
	BitcoinExchange();
	~BitcoinExchange();

	BitcoinExchange( const BitcoinExchange& src );
    BitcoinExchange& operator=( const BitcoinExchange& rhs );

	void exchange(char* path);
};

#endif
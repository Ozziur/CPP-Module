/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:23:56 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/15 17:06:14 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

SedV2::SedV2(std::string filename): _infile(filename)
{
	this->_outfile = this->_infile + ".replace";
}

SedV2::~SedV2()
{
}

void SedV2::replace(std::string to_find, std::string new_str)
{
	std::ifstream ifs(this->_infile);
	if (ifs.is_open())
	{
		std::string read;
		if (std::getline(ifs, read, '\0'))
		{
			std::ofstream ofs(this->_outfile);
			size_t pos = read.find(to_find);

			while (pos != std::string::npos)
			{
				read.erase(pos, to_find.length());
				read.insert(pos, new_str);
				pos = read.find(to_find);
			}
			ofs << read;
			ofs.close();
		}
		else
			std::cerr << "I'm like your brain" << std::endl;
		ifs.close();
	}
	else
	{
		std::cerr << "BOOM!!!!!" << std::endl;
		exit(EXIT_FAILURE);
	}
}

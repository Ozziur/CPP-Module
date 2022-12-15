/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:11:25 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/15 15:35:25 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>

class SedV2
{
private:
    std::string _infile;
    std::string _outfile;
public:
    SedV2(std::string filename);
    ~SedV2();

    void replace(std::string to_find, std::string new_str);
};


#endif

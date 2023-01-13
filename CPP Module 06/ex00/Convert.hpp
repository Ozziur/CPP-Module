/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:01:36 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/13 12:14:41 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert {
	public:
		~Convert();

		static void convert(const std::string& literal);
	private:
		Convert();
		Convert(const Convert& other);
		Convert& operator=(const Convert& other);

		//static bool tryChar(const std::string& literal);
		//static bool tryInt(const std::string& literal);
		//static bool tryFloat(const std::string& literal);
		//static bool tryDouble(const std::string& literal);
};

#endif

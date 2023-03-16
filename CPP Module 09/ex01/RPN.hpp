/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:31:51 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/16 11:53:33 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>
#include <sstream>

class RPN
{
	private:
		std::string			_expr;
		std::stack <int>	_num;
	public:
		RPN(std::string expr);
		~RPN();

		RPN(const RPN& src);
    	RPN& operator=(const RPN& rhs);

		bool evaluate();
};

#endif
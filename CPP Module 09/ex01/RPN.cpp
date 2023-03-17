/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:44:29 by mruizzo           #+#    #+#             */
/*   Updated: 2023/03/17 14:21:25 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN(std::string expr): _expr(expr) {}

RPN::~RPN() {}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		this->_expr = rhs._expr;
		this->_num = rhs._num;
	}
	return *this;
}

bool RPN::evaluate()
{

	std::istringstream iss(_expr);
    std::string token;
	while (iss >> token)
	{
		if (std::isdigit(token[0]))
			_num.push(token[0] - '0');
		else if (token == "+")
		{
			if ( _num.size() < 2)
			{
				std::cerr << "espressione malformata +" << std::endl;
				return (false);
			}
			int a = _num.top();
			_num.pop();
			int b = _num.top();
			_num.pop();
			_num.push(a + b);
		}
		else if (token == "-")
		{
			if ( _num.size() < 2)
			{
				std::cerr << "espressione malformata -" << std::endl;
				return (false);
			}
			int a = _num.top();
			_num.pop();
			int b = _num.top();
			_num.pop();
			_num.push(b - a);
		}
		else if (token == "*")
		{
			if ( _num.size() < 2)
			{
				std::cerr << "espressione malformata *" << std::endl;
				return (false);
			}
			int a = _num.top();
			_num.pop();
			int b = _num.top();
			_num.pop();
			_num.push(a * b);
		}
		else if (token == "/")
		{
			if ( _num.size() < 2)
			{
				std::cerr << "espressione malformata /" << std::endl;
				return (false);
			}
			int a = _num.top();
			_num.pop();
			int b = _num.top();
			_num.pop();
			if (a == 0)
			{
				std::cerr << "divisione per zero" << std::endl;
				return (false);
			}
			_num.push(b / a);
		}
		if (std::isalpha(token[0]))
		{
			std::cerr << "espressione malformata lettere" << std::endl;
				return (false);
		}
	}

	if (_num.size() != 1)
	{
		std::cerr << "espressione malformata bho" << std::endl;
		return (false);
	}
	
	std::cout << _num.top() << std:: endl;
	return true;
}

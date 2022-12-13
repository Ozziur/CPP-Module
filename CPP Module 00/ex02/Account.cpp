/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:06:26 by mruizzo           #+#    #+#             */
/*   Updated: 2022/12/13 20:37:13 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	std::time_t result = std::time(NULL);

	std::cout << std::setfill('0') << "[" << 1900 + std::localtime(&result)->tm_year
			<< std::setw(2) << 1 + std::localtime(&result)->tm_mon
			<< std::setw(2) << std::localtime(&result)->tm_mday
			<< "_"
			<< std::setw(2) << std::localtime(&result)->tm_hour
			<< std::setw(2) << std::localtime(&result)->tm_min
			<< std::setw(2) << std::localtime(&result)->tm_sec
			<< "] " << std::flush;
}

Account::Account(int initiale_deposit)
{
	this->_accountIndex =_nbAccounts;
	this->_amount = initiale_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initiale_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "closed" << std::endl;
}

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

int     Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts << ";"
			<< "total:" << getTotalAmount() << ";"
			<< "deposit:" << getNbDeposits << ";"
			<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" <<_amount << ";" << std::flush;
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";"
			<< "amount:" << _amount << ";"
			<< "nb_deposit" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "withdrawal:" << std::flush;
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";" <<std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "amout:" << _amount << ";"
			<< "nb_deposit:" << _nbDeposits <<std::endl;
	return true;
}

void    Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "deposits:" << _nbDeposits << ";"
			<< "withdrawals:" << _nbWithdrawals << std::endl;
}

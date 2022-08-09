/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:12:27 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/09 15:16:01 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::~Account()
{
	Account::_nbAccounts -= 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}

void	Account::_displayTimestamp(void)
{
	std::chrono::time_point<std::chrono::system_clock>	now = std::chrono::system_clock::now();
	std::time_t	time = std::chrono::system_clock::to_time_t(now);

	tm local_tm = *localtime(&time);
	std::cout << std::setfill('0') << "[" << local_tm.tm_year + 1900
		<< std::setw(2) << local_tm.tm_mon
		<< std::setw(2) << local_tm.tm_mday << "_"
		<< std::setw(2) << local_tm.tm_hour
		<< std::setw(2) << local_tm.tm_min
		<< std::setw(2) << local_tm.tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "\033[32maccounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" 
		<< _totalNbWithdrawals << "\033[0m\n";
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:"
		<< this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit
		 << ";deposit:" << deposit << ";amount:" << this->_amount
		 << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" 
		<< this->_nbWithdrawals << std::endl;
	return (true);
}

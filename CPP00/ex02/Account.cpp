/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:12:27 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/08 17:12:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
}

Account::~Account()
{
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
		<< std::setw(4) << local_tm.tm_sec << "]" << "\n";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
}

void	Account::displayStatus(void) const
{
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return (true);
}

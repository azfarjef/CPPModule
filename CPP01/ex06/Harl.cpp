/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 07:30:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/12 15:38:57 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string& level)
{
	this->_level = this->convertLevelToInt(level);
}

Harl::~Harl(void)
{
}

Harl::intLevel	Harl::convertLevelToInt(std::string level)
{
	std::string	commentLevels[] = {
		"ERROR",
		"WARNING",
		"INFO",
		"DEBUG"
	};
	// std::for_each(level.begin(), level.end(), [](char & c){
	// 	c = ::toupper(c);
	// });
	for (int i = 0; level[i]; i++)
		level[i] = std::toupper(level[i]);
	// std::cout << level << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (level == commentLevels[i])
			return ((intLevel)i);
	}
	return (Harl::insignificantLevel);
}

void	Harl::complain(const std::string& level)
{
	this->complain(this->convertLevelToInt(level));
}

void	Harl::complain(Harl::intLevel level)
{
	if (level <= this->_level)
	{
		switch (level)
		{
			case Harl::errorLevel:
				this->error();
				break;
			case Harl::warningLevel:
				this->warning();
				break;
			case Harl::infoLevel:
				this->info();
				break;
			case Harl::debugLevel:
				this->debug();
				break;
			case Harl::insignificantLevel:
				this->insignificant();
				break;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n" << "I love having extra bacon for my 7XL-double-cheese-triple"
		"-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\n" << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! If you did, I wouldn’t be "
		"asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\n" << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas you started working here since "
		"last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\n" << "This is unacceptable! I want to speak to the manager now." 
		<< std::endl << std::endl;
}

void	Harl::insignificant(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}

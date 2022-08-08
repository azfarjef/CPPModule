/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:19:07 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/08 14:25:45 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::infoName[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = firstName; i <= secret; i++)
		this->infos[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_info(int index)
{
	this->index = index;
	for (int i = firstName; i <= secret; i++)
	{
		std::cout << Contact::infoName[i] << ": ";
		std::getline(std::cin, this->infos[i]);
	}
	for (int i = firstName; i <= secret; i++)
	{
		if (this->infos[i].length() == 0)
		{
			std::cout << "Empty field(s)! Contact not added" << std::endl;
			return (false);
		}
	}
	std::cout << "Contact " << this->infos[2] << " added!" << std::endl;
	return (true);
}

void Contact::print_info(void)
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = 1; i < 4; i++)
	{
		std::cout << "|";
		if (this->infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->infos[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::print(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->infoName[i] << ": " << this->infos[i] << std::endl;
	}
}
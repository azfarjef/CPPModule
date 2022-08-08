/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:43:00 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/08 14:36:40 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->count = 0;
	this->oldest = 1;
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_contact(void)
{
	this->index = this->count + 1;
	if (this->count == 8)
	{
		this->index = this->oldest;
		this->oldest == 8? this->oldest = 1: this->oldest++;
	}
	if (this->contacts[this->index - 1].set_info(this->index))
		this->count == 8? this->count = 8: this->count++;
}

void Phonebook::search_contact(void)
{
	int	index;
	
	if (this->count == 0)
		std::cout << "Please add a contact before searching" << std::endl;
	else
	{
		//displays all created contacts
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) 
				<< "First Name" << "|" << std::setw(10) << "Last Name" << "|" 
				<< std::setw(10) << "Nickname" << "|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0 ; i < this->count; i++)
			this->contacts[i].print_info();
		std::cout << "|-------------------------------------------|" << std::endl;

		//displays searched contact
		std::cout << "Enter the index of the contact: ";
		while (!(std::cin >> index) || (index <= 0 || index > this->count))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error! Invalid index. Enter an index between 0 and " << this->count + 1 << ": ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].print();
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:39:37 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/03 19:43:51 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;
	bool		status;
	
	status = true;
	while (status)
	{
		std::cout << "Enter your command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "Exited the program successfully!" << std::endl;
			status = false;
		}
	}
	return (0);
}
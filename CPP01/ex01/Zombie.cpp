/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:08:10 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/09 18:04:35 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name("")
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed\n";
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

bool	Zombie::setName(std::string newName)
{
	if (newName == "")
		return (false);
	this->name = newName;
	return (true);
}

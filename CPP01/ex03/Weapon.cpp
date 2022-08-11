/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:33:32 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/11 15:59:27 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}

bool	Weapon::setType(const std::string& newType)
{
	if (newType == "")
	{
		std::cout << "New type cannot be an empty string\n";
		return (false);
	}
	this->type = newType;
	return (true);
}

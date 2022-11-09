/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:52:25 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/09 10:22:52 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name(""), _equipped(0)
{
	for(int i = 0; i < Character::_size; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name)
{
	for(int i = 0; i < Character::_size; i++)
		this->_inventory[i] = NULL;
	*this = Character();
	this->_name = name;
	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(const Character & src)
{
	*this = src;
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < Character::_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character & Character::operator=(const Character & src)
{
	this->_equipped = 0;
	// for(int i = 0; i < Character::_size; i++)
	// 	this->_inventory[i] = NULL;
	for (int i = 0; i < Character::_size; i++)
	{
		// std::cout << this->_inventory[i] << std::endl;
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (src._inventory[i])
		{
			this->_inventory[i] = src._inventory[i]->clone();
			this->_equipped++;
		}
		else
			this->_inventory[i] = NULL;			
	}
	this->_name = src.getName();
	std::cout << "Character copy assignment called" << std::endl;
	return *this;
}

std::string const &	Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	if (this->_equipped < Character::_size)
	{
		this->_inventory[this->_equipped] = m;
		this->_equipped++;
		std::cout << this->_name << " equipped " << m->getType() << std::endl;
	}
	else
		std::cout << "Couldn't equip " << m->getType() << ", " << this->_name << " inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	// int	i;
	
	// i = idx + 1;
	// while (i < Character::_size && this->_inventory[i])
	// {
	// 	this->_inventory[i - 1] = this->_inventory[i];
	// 	i++;
	// }
	// this->_inventory[i] = NULL;
	if (this->_inventory[idx])
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		this->unequip(idx);
	}
	else
		std::cout << "Inventory " << idx << " is empty" << std::endl;
}

void	Character::printInventory() const
{
	std::cout << this->_name << "'s INVENTORY" << std::endl;
	for (int i = 0; i < Character::_size; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}

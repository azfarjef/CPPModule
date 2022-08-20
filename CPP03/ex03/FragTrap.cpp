/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:27:36 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/20 09:36:23 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	this->fdamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	this->fdamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &inst)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = inst;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &inst)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	this->setName(inst.name);
	this->setHp(inst.hp);
	this->setEnergy(inst.energy);
	this->setDamage(inst.damage);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants to high five" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (energy > 0)
	{
		this->energy--;
		std::cout << "FragTrap " << this->name << " attacks " << target 
			<< ", causing " << this->damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " has " << this->energy 
			<< " energy to attack " << target << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, FragTrap const &inst)
{
	out << "FragTrap " << inst.getName() << " has " << inst.getEnergy() << " energy left";
	return (out);
}

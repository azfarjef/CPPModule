/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:39:27 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 19:09:50 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = inst;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &inst)
{
	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	this->setName(inst.name);
	this->setHp(inst.hp);
	this->setEnergy(inst.energy);
	this->setDamage(inst.damage);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energy > 0)
	{
		this->energy--;
		std::cout << "ScavTrap " << this->name << " attacks " << target 
			<< ", causing " << this->damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " has " << this->energy 
			<< " energy to attack " << target << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, ScavTrap const &inst)
{
	out << "ScavTrap " << inst.getName() << " has " << inst.getEnergy() << " energy left";
	return (out);
}

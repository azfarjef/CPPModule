/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:01:54 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 19:06:31 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Default"), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): name(name), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = inst;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &inst)
{
	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	this->setName(inst.name);
	this->setHp(inst.hp);
	this->setEnergy(inst.energy);
	this->setDamage(inst.damage);
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (energy > 0)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target 
			<< ", causing " << this->damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has " << this->energy 
			<< " energy to attack " << target << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount 
		<< " damage. Current hp is " << this->hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0)
	{
		this->energy--;
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " repairs itself with " << amount 
			<< ". Current hp is " << this->hp << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has " << this->energy 
			<< " energy to repair itself" << std::endl;
	}
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::setHp(int amount)
{
	this->hp = amount;
}

void	ClapTrap::setEnergy(int amount)
{
	this->energy = amount;
}

void	ClapTrap::setDamage(int amount)
{
	this->damage = amount;
}

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int			ClapTrap::getHp(void) const
{
	return (this->hp);
}
int 		ClapTrap::getEnergy(void) const
{
	return (this->energy);
}
int			ClapTrap::getDamage(void) const
{
	return (this->damage);
}

std::ostream	&operator<<(std::ostream &out, ClapTrap const &inst)
{
	out << "ClapTrap " << inst.getName() << " has " << inst.getEnergy() << " energy left";
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:37:31 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/20 09:39:16 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name):
	ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::fdamage;
	std::cout << "Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst)
{
	*this = inst;
	std::cout << "Diamond copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called" << std::endl; 
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &inst)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	this->setName(inst.name);
	this->setHp(inst.hp);
	this->setEnergy(inst.energy);
	this->setDamage(inst.damage);
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap name is " << this->name << ", ClapTrap name is "
		<< ClapTrap::name << std::endl;
}

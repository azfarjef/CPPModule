/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:00:30 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &inst)
{
	*this = inst;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &inst)
{
	std::cout << "Animal copy assignment called" << std::endl;
	this->type = inst.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "*Animal soundssssss*" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &out, const Animal &inst)
{
	out << inst.getType();
	return (out);
}

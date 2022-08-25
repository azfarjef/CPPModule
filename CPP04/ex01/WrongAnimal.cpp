/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:00:30 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst)
{
	*this = inst;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &inst)
{
	std::cout << "WrongAnimal copy assignment called" << std::endl;
	this->type = inst.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal soundssssss*" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &out, const WrongAnimal &inst)
{
	out << inst.getType();
	return (out);
}

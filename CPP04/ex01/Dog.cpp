/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:00:27 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &inst)
{
	*this = inst;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &inst)
{
	std::cout << "Dog copy assignment called" << std::endl;
	this->type = inst.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Dog soundssssss*" << std::endl;
}

// std::ostream	&operator<<(std::ostream &out, const Dog &inst)
// {
// 	out << inst.getType();
// 	return (out);
// }

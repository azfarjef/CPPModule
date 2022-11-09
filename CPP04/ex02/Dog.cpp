/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:51:31 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &inst)
{
	*this = inst;
	// this->brain = new Brain(*(inst.brain));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &inst)
{
	std::cout << "Dog copy assignment called" << std::endl;
	this->type = inst.type;
	// if (this->brain != NULL)
	// 	delete this->brain;
	this->brain = new Brain(*(inst.brain));
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Dog soundssssss*" << std::endl;
}

void	Dog::printBrain(int n)
{
	this->brain->printIdeas(n);
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

// std::ostream	&operator<<(std::ostream &out, const Dog &inst)
// {
// 	out << inst.getType();
// 	return (out);
// }

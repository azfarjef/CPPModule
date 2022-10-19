/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:52:58 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &inst)
{
	*this = inst;
	// this->brain = new Brain(*(inst.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &inst)
{
	std::cout << "Cat copy assignment called" << std::endl;
	this->type = inst.type;
	if (this->brain != NULL)
		delete this->brain;
	this->brain = new Brain(*(inst.brain));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "*Cat soundssssss*" << std::endl;
}

void	Cat::printBrain(int n)
{
	this->brain->printIdeas(n);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

// std::ostream	&operator<<(std::ostream &out, const Cat &inst)
// {
// 	out << inst.getType();
// 	return (out);
// }

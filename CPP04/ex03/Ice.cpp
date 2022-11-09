/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:32:38 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/08 20:10:17 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & src): AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice & src)
{
	this->_type = src._type;
	std::cout << "Ice copy assignment called" << std::endl;
	return *this;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"	<< std::endl;
}

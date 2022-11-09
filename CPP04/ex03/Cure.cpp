/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:32:38 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/08 20:10:10 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & src): AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure & src)
{
	this->_type = src._type;
	std::cout << "Cure copy assignment called" << std::endl;
	return *this;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() <<  " wounds *"	<< std::endl;
}

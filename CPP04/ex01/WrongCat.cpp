/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:00:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:00:32 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &inst)
{
	*this = inst;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &inst)
{
	std::cout << "WrongCat copy assignment called" << std::endl;
	this->type = inst.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "*WrongCat soundssssss*" << std::endl;
}

// std::ostream	&operator<<(std::ostream &out, const WrongCat &inst)
// {
// 	out << inst.getType();
// 	return (out);
// }

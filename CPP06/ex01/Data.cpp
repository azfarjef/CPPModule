/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:05:14 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 22:20:36 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	std::cout << "Default data constructor called" << std::endl;
}

Data::Data(std::string str): _str(str)
{
	std::cout << "Data constructor called" << std::endl;
}

Data::Data(const Data& src)
{
	_str = src.getStr();
	std::cout << "Data copy constructor called" << std::endl;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
}

Data	&Data::operator=(const Data& src)
{
	this->_str = src.getStr();
	std::cout << "Data copy assignment called" << std::endl;
	return (*this);
}

std::string	Data::getStr() const
{
	return (this->_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:43:28 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/20 20:32:28 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type)
{
	std::cout << "Type AMateria constructor called" << std::endl;
}

const std::string	&AMateria::getType() const
{
	return this->_type;
}

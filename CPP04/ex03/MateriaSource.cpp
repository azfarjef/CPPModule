/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:23:40 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/08 19:50:29 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _learned(0)
{
	for (int i = 0; i < MateriaSource::_size; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & src)
{
	for (int i = 0; i < MateriaSource::_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return *this;
}

void		MateriaSource::learnMateria(AMateria *mat)
{
	if (this->_learned >= MateriaSource::_size)
		std::cout << "Learning materia limit reached" << std::endl;
	else
	{
		this->_materias[this->_learned] = mat;
		this->_learned++;
		std::cout << mat->getType() << "Materia learned!" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MateriaSource::_size; i++)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
	}
	return NULL;
}

void	MateriaSource::printMaterias() const
{
	std::cout << "LIST OF MATERIAS LEARNED" << std::endl;
	for (int i = 0; i < MateriaSource::_size; i++)
	{
		if (this->_materias[i])
			std::cout << i << ": " << this->_materias[i]->getType() << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}

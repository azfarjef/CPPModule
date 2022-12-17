/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:46:03 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 18:35:55 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"
#include "utilities.hpp"
#include <limits.h>
#include <stdlib.h>
#include <cmath>

Caster::Caster()
{
	std::cout << "Caster default constructor called" << std::endl;
}

Caster::Caster(std::string str): _str(str)
{
	std::cout << "Caster constructor called" << std::endl;
}

Caster::Caster(const Caster &src)
{
	this->_str = src.getStr();
	std::cout << "Caster copy constructor called" << std::endl;
}

Caster::~Caster()
{
	std::cout << "Caster destructor called" << std::endl;
}

Caster	&Caster::operator=(const Caster &src)
{
	this->_str = src.getStr();
	std::cout << "Caster copy assignment called" << std::endl;
	return (*this);
}

std::string	Caster::getStr() const
{
	return (this->_str);
}


int	is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return 1;
	return 0;
}

Caster::operator char()
{
	char	c = 0;
	if (_str.length() == 1)
	{
		int	d = 0;
		try
		{
			d = ft_stoi(_str);
			c = static_cast<char>(d);
		}
		catch (const char* e)
		{
			c = _str[0];
		}
	}
	else
	{
		int	d = 0;
		try
		{
			d = ft_stoi(_str);
		}
		catch (const char* e)
		{
			std::cerr << "char: " << e << '\n';
			return 0;
		}
		if (d < CHAR_MIN || d > CHAR_MAX)
		{
			std::cout << "char: Impossible: out of range" << std::endl;
			return 0;
		}
		c = static_cast<char>(d);
	}
	if (is_printable(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	return c;
}

Caster::operator int()
{
	int	d = 0;
	
	try
	{
		d = ft_stoi(_str);
	}
	catch(const char* e)
	{
		std::cerr << "int: " << e << '\n';
		return 0;
	}
	std::cout << "int: " << d << std::endl;
	return (d);
}

Caster::operator float()
{
	float	f = 0;
	try
	{
		f = atof(_str.c_str());
		std::cout << "float: " << f << "f" << std::endl;

	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "float: Impossible: invalid argument" << '\n';
		return (f);
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "float: Impossible: out of range";
		return (f);
	}
	return (f);
}

Caster::operator double()
{
	double	d = 0;
	try
	{
		d = atof(_str.c_str());
		std::cout << "double: " << d << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "double: Impossible: invalid argument" << '\n';
		return (d);
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "double: Impossible: out of range";
		return (d);
	}
	return (d);
}

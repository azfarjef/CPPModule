/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:36:04 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 13:37:14 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR
Fixed::Fixed(void): value(0)
{
}

Fixed::Fixed(int const number)
{
	this->value = (number << Fixed::bit);
}

Fixed::Fixed(float const decimal)
{
	this->value = roundf(decimal * (1 << Fixed::bit));
}

Fixed::Fixed(Fixed const & inst)
{
	this->value = inst.getRawBits();
}

//COPY ASSIGNMENT OPERATOR
Fixed & Fixed::operator=(Fixed const & inst)
{
	this->value = inst.getRawBits();
	return (*this);
}

//DESTRUCTOR
Fixed::~Fixed(void)
{
}

//Comparison operators
bool	Fixed::operator>(Fixed const &inst) const
{
	return (this->getRawBits() > inst.getRawBits());
}

bool	Fixed::operator<(Fixed const &inst) const
{
	return (this->getRawBits() < inst.getRawBits());
}

bool	Fixed::operator>=(Fixed const &inst) const
{
	return (this->getRawBits() >= inst.getRawBits());
}

bool	Fixed::operator<=(Fixed const &inst) const
{
	return (this->getRawBits() <= inst.getRawBits());
}

bool	Fixed::operator==(Fixed const &inst) const
{
	return (this->getRawBits() == inst.getRawBits());
}

bool	Fixed::operator!=(Fixed const &inst) const
{
	return (this->getRawBits() != inst.getRawBits());
}

//Arithmetic operators
Fixed	Fixed::operator+(Fixed const & inst)
{
	Fixed	ret(*this);

	ret.setRawBits(this->getRawBits() + inst.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & inst)
{
	Fixed	ret(*this);
	
	ret.setRawBits(this->getRawBits() - inst.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & inst)
{
	Fixed	ret(*this);
	long	a, b;

	a = (long)this->getRawBits();
	b = (long)inst.getRawBits();
	ret.setRawBits((a * b) / (1 << Fixed::bit));
	return (ret);
}

Fixed	Fixed::operator/(Fixed const & inst)
{
	Fixed	ret(*this);
	long	a, b;

	a = (long)this->getRawBits();
	b = (long)inst.getRawBits();
	ret.setRawBits(a * (1 << Fixed::bit) / b);
	return (ret);
}

//in/de-crement operators
Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret(*this);
	operator++();
	return (ret);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);
	operator--();
	return (ret);
}

//min and max functions
Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


//get and set functions
int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bit));
}

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::bit);
}

//insertion operator overload
std::ostream &operator<<(std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}

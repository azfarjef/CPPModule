/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 07:15:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/30 08:47:31 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _N(n)
{
	_vector.reserve(_N);
	_filled = 0;
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(int first, int last, int dist)
{
	int tmp = 0;
	if (last < first)
	{
		tmp = last;
		last = first;
		first = tmp;
	}
	_N = std::abs((last - first) / dist);
	_vector.reserve(_N);
	for (int i = first; i < last; i += dist)
		_vector.push_back(i);
	_filled = _N;
	std::cout << "Span range constructor called" << std::endl;
}

Span::Span(const Span & src): _N(src._N), _vector(src._vector)
{
	_filled = src._vector.size();
	std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span &	Span::operator=(const Span & src)
{
	this->_N = src._N;
	this->_vector = src._vector;
	this->_filled = src._vector.size();
	std::cout << "Span copy assignment called" << std::endl;
	return (*this);
}

//GETTERS

unsigned int	Span::getN() const
{
	return (this->_N);
}

unsigned int	Span::getFilled() const
{
	return (this->_filled);
}

std::vector<int>	Span::getVector() const
{
	return (this->_vector);
}

//MEMBER FUNCTIONS

void	Span::addNumber(int n)
{
	if (_vector.size() >= _N)
		throw (std::out_of_range("Max limit reached, cannnot add more element"));
	_vector.push_back(n);
	_filled++;
}

void	Span::addNumber(my_iter start, my_iter end)
{
	if (end < start)
		return ;
	for (my_iter i = start; i != end; i++)
		addNumber(*i);
}

int	Span::longestSpan()
{
	if (_filled == 0 || _filled == 1)
		throw (std::out_of_range("Elements must be more than 1 to calculate span"));
	std::vector<int>::iterator	min = std::min_element(_vector.begin(), _vector.end());
	std::vector<int>::iterator	max = std::max_element(_vector.begin(), _vector.end());
	int	span = *max - *min;
	return span;
}

int	Span::shortestSpan()
{
	if (_filled == 0 || _filled == 1)
		throw (std::out_of_range("Elements must be more than 1 to calculate span"));

	std::vector<int>::iterator	maxptr = std::max_element(_vector.begin(), _vector.end());
	int	span = *maxptr;

	std::vector<int>	v = _vector;
	std::sort(v.begin(), v.end());
	for (unsigned int i = 0; i < v.size(); i++)
	{
		if (i && std::abs(v[i] - v[i - 1]) < span)
			span = std::abs(v[i] - v[i - 1]);
	}
	return span;
}

std::ostream &	operator<<(std::ostream & o, Span const & src)
{
	o << "Span elements: ";
	for (unsigned int i = 0; i < src.getFilled(); i++)
		o << (src.getVector())[i] << " ";
	return o;
}

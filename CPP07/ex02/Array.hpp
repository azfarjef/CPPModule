/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:25:05 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/20 11:23:17 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array()					: _n(0)	{ _t = new T[1]; _t[0] = 0; }
		Array(unsigned int n)	: _n(n)	{ _t = new T[n]; }
		Array(const Array & src): _n(src.size())
		{
			T*	src_t = src.getT();
			_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = src_t[i];
		}
		~Array() { delete [] this->_t; }

		Array &	operator=(const Array & src)
		{
			T*	src_t = src.getT();
			this->_n = src.size();
			
			delete [] this->_t;
			this->_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = src_t[i];
			return (*this);
		}

		T &	operator[](int i)
		{
			if (i < 0 || i >= static_cast<int>(this->_n))
				throw (std::exception());
			else
				return (*(_t + i));
		}

		T*				getT() const 	{ return (this->_t); }
		unsigned int	size() const	{ return (this->_n); }
		
	private:
		T*				_t;
		unsigned int	_n;
};

template<typename T>
std::ostream &	operator<<(std::ostream & o, Array<T> const & src)
{
	for (unsigned int i = 0; i < src.size(); i++)
		o << "T[" << i << "]: " << (src.getT())[i] << std::endl;
	return o;
}

#endif

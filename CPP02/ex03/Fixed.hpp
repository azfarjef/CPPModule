/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:30:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 13:00:11 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(int const number);
		Fixed(float const decimal);
		Fixed(Fixed const & inst);
		Fixed & operator=(Fixed const &inst);
		virtual ~Fixed(void);

		bool	operator>(Fixed const &inst) const;
		bool	operator<(Fixed const &inst) const;
		bool	operator>=(Fixed const &inst) const;
		bool	operator<=(Fixed const &inst) const;
		bool	operator==(Fixed const &inst) const;
		bool	operator!=(Fixed const &inst) const;

		Fixed	operator+(Fixed const & inst);
		Fixed	operator-(Fixed const & inst);
		Fixed	operator*(Fixed const & inst);
		Fixed	operator/(Fixed const & inst);
	
		Fixed	operator++(int);
		Fixed	operator++();
		Fixed	operator--(int);
		Fixed	operator--();

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);


		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					value;
		static const int	bit = 8;
};

std::ostream &operator<<(std::ostream & out, Fixed const & value);


#endif

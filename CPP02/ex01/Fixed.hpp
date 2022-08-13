/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:30:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/13 18:33:03 by mahmad-j         ###   ########.fr       */
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

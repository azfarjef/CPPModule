/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:30:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/13 17:21:44 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & inst);
		Fixed & operator=(Fixed const &inst);
		virtual ~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					value;
		static const int	bit = 8;
	
};

#endif

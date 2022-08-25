/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:16 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:17:28 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:

		WrongCat();
		WrongCat(const WrongCat &inst);
		virtual ~WrongCat();

		WrongCat	&operator=(const WrongCat &inst);

		void	makeSound(void) const;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:21:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:16:34 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	
	public:

		Animal();
		Animal(const std::string type);
		Animal(const Animal &inst);
		virtual ~Animal();

		Animal	&operator=(const Animal &inst);

		virtual void	makeSound() const;

		const std::string	&getType(void) const;

	protected:

		std::string	type;
};

std::ostream	&operator<<(std::ostream &out, Animal &inst);

#endif

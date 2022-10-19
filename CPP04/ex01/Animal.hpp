/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:21:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:01:56 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
	
	public:

		Animal();
		Animal(const std::string type);
		Animal(const Animal &inst);
		virtual ~Animal();

		Animal	&operator=(const Animal &inst);

		virtual void	makeSound() const;

		const std::string	&getType(void) const;
		virtual Brain		*getBrain(void) const = 0;
		virtual void			printBrain(int n) = 0;

	protected:

		std::string	type;
};

std::ostream	&operator<<(std::ostream &out, Animal &inst);

#endif

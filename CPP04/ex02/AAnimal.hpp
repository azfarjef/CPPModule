/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:21:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 21:40:18 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
	
	public:

		virtual ~Animal();

		virtual void	makeSound() const = 0;

		const std::string	&getType(void) const;
		virtual Brain		*getBrain(void) const = 0;
		virtual void		printBrain(int n) = 0;

	protected:

		std::string	type;
};

#endif

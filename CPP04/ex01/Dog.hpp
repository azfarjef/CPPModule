/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:16 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:02:49 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	
	public:

		Dog();
		Dog(const Dog &inst);
		virtual ~Dog();

		Dog	&operator=(const Dog &inst);

		virtual void	makeSound(void) const;
		void			printBrain(int n);

		Brain *getBrain(void) const;

	private:
	
		Brain	*brain;

};

#endif

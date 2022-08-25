/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:16 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:17:28 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	
	public:

		Cat();
		Cat(const Cat &inst);
		virtual ~Cat();

		Cat	&operator=(const Cat &inst);

		virtual void	makeSound(void) const;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:21:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 17:16:34 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	
	public:

		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &inst);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &inst);

		void	makeSound() const;

		const std::string	&getType(void) const;

	protected:

		std::string	type;
};

std::ostream	&operator<<(std::ostream &out, WrongAnimal &inst);

#endif

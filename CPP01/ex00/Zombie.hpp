/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:02:21 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/09 17:44:29 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);

	private:
		std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif

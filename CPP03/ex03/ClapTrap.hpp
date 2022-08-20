/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:55:28 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 19:05:27 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	
	public:
	
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &inst);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &inst);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setName(std::string name);
		void	setHp(int amount);
		void	setEnergy(int amount);
		void	setDamage(int amount);
		
		std::string	getName(void) const;
		int 		getHp(void) const;
		int 		getEnergy(void) const;
		int 		getDamage(void) const;
	
	protected:
	
		std::string	name;
		int			hp;
		int			energy;
		int			damage;
};

std::ostream	&operator<<(std::ostream &out, ClapTrap const &inst);

#endif

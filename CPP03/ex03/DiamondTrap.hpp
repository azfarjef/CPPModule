/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:35:02 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/20 00:08:59 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	
	public:

		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &inst);
		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &inst);

		void	attack(const std::string &target);
		void	whoAmI(void) const;

	private:
		
		std::string	name;

};

#endif

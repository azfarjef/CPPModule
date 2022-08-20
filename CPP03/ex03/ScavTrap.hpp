/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:18:42 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/20 00:15:48 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	
	public:
		
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &inst);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &inst);
		
		void	attack(const std::string &target);
		void	guardGate(void);

	protected:
		
		ScavTrap(void);

};

std::ostream	&operator<<(std::ostream &out, ScavTrap const &inst);

#endif

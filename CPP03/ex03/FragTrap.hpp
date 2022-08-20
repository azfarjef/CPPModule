/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:15:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/20 09:35:51 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap(const std::string name);
		FragTrap(const FragTrap &inst);
		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &inst);

		void	highFivesGuys(void);
		void	attack(const std::string &target);

	protected:

		int	fdamage;
		FragTrap(void);
};

std::ostream	&operator<<(std::ostream &out, FragTrap const &inst);

#endif

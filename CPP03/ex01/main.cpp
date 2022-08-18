/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:03 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 19:13:30 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("AAA");
	ScavTrap scav("CCC");
	// ClapTrap clapC("CCC");

	scav = ScavTrap("SSS");
	clap.attack("BBB");
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.attack("BBB");
	scav.takeDamage(5);
	scav.beRepaired(3);
	
	scav.guardGate();
	// clapC.attack("BBB");
	// clapC.takeDamage(2);
	// clapC.beRepaired(1);
	
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	return (0);
}

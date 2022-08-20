/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:03 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/19 22:28:43 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clap("AAA");
	ScavTrap scav("CCC");
	FragTrap frag("CCC");

	scav = ScavTrap("SSS");
	clap.attack("BBB");
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.attack("BBB");
	scav.takeDamage(5);
	scav.beRepaired(3);
	
	scav.guardGate();
	
	frag.attack("BBB");
	frag.takeDamage(2);
	frag.beRepaired(1);

	frag.highFivesGuys();
	
	std::cout << clap << std::endl;
	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	return (0);
}

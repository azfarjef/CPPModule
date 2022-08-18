/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:03 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 17:25:32 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("AAA");
	// ClapTrap clapC("CCC");

	clap = ClapTrap("CCC");
	clap.attack("BBB");
	clap.takeDamage(5);
	clap.beRepaired(3);
	
	// clapC.attack("BBB");
	// clapC.takeDamage(2);
	// clapC.beRepaired(1);
	
	std::cout << clap << std::endl;
	return (0);
}

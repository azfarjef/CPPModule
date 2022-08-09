/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:33:15 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/09 18:17:18 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n = 5;
	Zombie*	zombies = zombieHorde(n, "wan");
	for (int i = 0; i < n; i++)
	{
		zombies->announce();
	}
	delete [] zombies;
	return (0);
}

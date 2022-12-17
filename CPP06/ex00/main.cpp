/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:58:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 18:33:51 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Caster.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error! Argument must be 2. Example: ./Caster 42" << std::endl;
		return 0;
	}
	std::cout << std::fixed << std::setprecision(1);

	std::string	arg = av[1];

	Caster	caster(arg);

	char	c;
	int		i;
	float	f;
	double	d;

	c = static_cast<char>(caster);
	i = static_cast<int>(caster);
	f = static_cast<float>(caster);
	d = static_cast<double>(caster);
	
	return 0;
}

// INT_MAX = 2147483647
// FLOAT_MAX = 3.40282e+38

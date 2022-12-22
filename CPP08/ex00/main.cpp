/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:08:47 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/22 12:28:47 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

void	print_range(int i)
{
	std::cout << i << std::endl;
}

int	main()
{
	std::vector<int> vec;

	for (int i = 0; i < 5; i++)
		vec.push_back(i+1);
	
	std::cout << "Printing elements in the range..." << std::endl;
	std::for_each(vec.begin(), vec.end(), print_range);

	try
	{
		std::cout << easyfind(vec, 2) << " is found in the given range" << std::endl;
		std::cout << easyfind(vec, 5) << " is found in the given range" << std::endl;
		std::cout << easyfind(vec, 42) << " is found in the given range" << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

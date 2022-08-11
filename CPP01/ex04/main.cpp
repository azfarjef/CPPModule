/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:26:01 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/11 17:38:17 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char** av)
{
	(void)ac;
	std::ifstream	ifs(av[1]);
	std::string		str;

	str
	ifs >> str;
	std::cout << str << std::endl;
	return (0);
}

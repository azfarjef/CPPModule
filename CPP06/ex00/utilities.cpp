/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:39:15 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 17:51:08 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

int	ft_stoi(std::string str)
{
	long	ret = 0;
	int		i = 0;
	int 	sign = 1;

	while (str[i] == ' ')
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	if (!isdigit(str[i]))
		throw "Impossible: invalid argument";
	while (str[i] && isdigit(str[i]))
	{
		ret = ret * 10;
		ret = ret + (str[i] - '0');
		i++;
	}
	ret = ret * sign;
	if (ret > INT_MAX || ret < INT_MIN)
		throw "Impossible: out of range";
	return (ret);
}

// int	main()
// {
// 	std::cout << ft_stoi("0") << std::endl;
// 	std::cout << ft_stoi("nan") << std::endl;
// 	std::cout << ft_stoi("42.0f") << std::endl;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:43:48 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/07/26 18:02:01 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::cout;
using std::toupper;

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	}
	else
	{
		int	j = 1;
		while (j < ac)
		{
			for (int i = 0; av[j][i]; i++)
				cout << (char)toupper(av[j][i]);
			j++;
		}
		cout << "\n";
	}
	return (0);
}

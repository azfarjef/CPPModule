/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:26:01 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/11 19:46:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	outputToFile(std::string content, std::string fileName)
{
	std::ofstream	ofs;

	fileName += ".replace";
	ofs.open(fileName);
	// std::cout << fileName << std::endl;
	ofs << content;
}

void	replaceString(std::string* str, std::string s1, std::string s2, std::ifstream& ifs)
{
	(*str).assign(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>());
	for (size_t i = 0; i < (*str).length(); i++)
	{
		if ((*str).compare(i, s1.length(), s1) == 0)
		{
			(*str).erase(i, s1.length());
			(*str).insert(i, s2);
		}
	}
}

int	main(int ac, char** av)
{
	(void)ac;
	std::ifstream	ifs(av[1]);
	std::string		str;
	std::string		s1 = av[2];
	std::string		s2 = av[3];

	replaceString(&str, av[2], av[3], ifs);
	// std::cout << str << std::endl;
	outputToFile(str, av[1]);
	return (0);
}

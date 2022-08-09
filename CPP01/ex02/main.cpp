/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:21:32 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/09 18:34:10 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	string		str = "HI THIS IS BRAIN";
	string*	stringPTR = &str;
	string&	stringREF = str;

	cout << "Memory address of the string variable is " << &str << endl;
	cout << "Memory address held by stringPTR is " << &(*stringPTR) << endl;
	cout << "Memory address held by stringREF is " << &stringREF << endl;

	cout << "Value of the string variable is " << str << endl;
	cout << "Value pointed to by stringPTR is " << *stringPTR << endl;
	cout << "Value pointed to by stringREF is " << stringREF << endl;
	
	return (0);
}

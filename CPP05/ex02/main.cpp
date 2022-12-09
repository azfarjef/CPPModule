/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:21:59 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/10 07:27:22 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int	main()
{
	std::srand(std::time(0));

	Bureaucrat	B("A", 1);
	ShrubberyCreationForm	S("home");
	RobotomyRequestForm	R("lab");
	PresidentialPardonForm	P("office");
	
	std::cout << "-------------------------------------------" << std::endl;
	B.signForm(S);
	B.executeForm(S);

	std::cout << "-------------------------------------------" << std::endl;
	B.signForm(R);
	B.executeForm(R);
	
	std::cout << "-------------------------------------------" << std::endl;
	B.signForm(P);
	B.executeForm(P);
	
	std::cout << "-------------------------------------------" << std::endl;
}

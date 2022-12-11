/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:21:59 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/11 08:12:40 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

// int	main()
// {
// 	std::srand(std::time(0));

// 	Bureaucrat	B("A", 1);
// 	ShrubberyCreationForm	S("home");
// 	RobotomyRequestForm	R("lab");
// 	PresidentialPardonForm	P("office");
	
// 	std::cout << "-------------------------------------------" << std::endl;
// 	B.signForm(S);
// 	B.executeForm(S);

// 	std::cout << "-------------------------------------------" << std::endl;
// 	B.signForm(R);
// 	B.executeForm(R);
	
// 	std::cout << "-------------------------------------------" << std::endl;
// 	B.signForm(P);
// 	B.executeForm(P);
	
// 	std::cout << "-------------------------------------------" << std::endl;
// }

int	main()
{
	std::srand(std::time(0));
	
	Bureaucrat	B("A", 1);
	Intern	someRandomIntern;
	Form	*rrf;
	Form	*unknown;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	std::cout << "-------------------------------------------" << std::endl;
	B.signForm(*rrf);
	B.executeForm(*rrf);
	std::cout << "-------------------------------------------" << std::endl;

	try
	{
		unknown = someRandomIntern.makeForm("selling license", "shop");
		std::cout << *unknown << " created" << std::endl;
	}
	catch(Intern::Exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;
	
	delete rrf;
	return (0);
}

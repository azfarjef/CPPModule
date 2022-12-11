/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 06:39:19 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/11 07:52:19 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &src)
{
	(void)src;
	std::cout << "Intern copy assingment called" << std::endl;
	return (*this);
}

static Form	*makeRobo(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form		*((*makeFunc[3])(std::string target)) = {
		makeRobo,
		makePres,
		makeShrub
	};
	
	std::string	msg[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	
	Form		*ret = NULL;
	
	for (int i = 0; i < 3; i++)
	{
		if (name == msg[i])
			ret = makeFunc[i](target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::Exception());
	return (ret);
}

const char	*Intern::Exception::what() const throw()
{
	return ("Intern cannot process unknown form name");
}

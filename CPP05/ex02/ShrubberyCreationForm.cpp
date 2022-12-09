/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:35:01 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 22:19:57 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Default shrubbery", 145, 137)
{
	this->_target = "Default";
	std::cout << *this << " shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137)
{
	this->_target = target;
	std::cout << *this << " shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	this->_target = src.getTarget();
	std::cout << *this << " shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << *this << " shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src.getTarget();
	std::cout << *this << " shrubbery copy assignment called" << std::endl;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string	tree = 
		"     ccee88oo          \n"
		"  C8O8O8Q8PoOb o8oo    \n"
		" dOB69QO8PdUOpugoO9bD  \n"
		"CgggbU8OU qOp qOdoUOdcb\n"
		"   6OuU  /p u gcoUodpP \n"
		"      \\\\//  /douUP   \n"
		"        \\\\////       \n"
		"         |||/\\        \n"
		"         |||\\/        \n"
		"         |||||         \n"
		"  .....\\//||||\\....  \n";
	
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeTooLowException());
	else
	{
		std::ofstream	ofs(this->_target.c_str());
		
		if (!ofs.is_open())
		{
			std::cerr << "Failed to create file" << std::endl;
			return ;
		}
		ofs << tree;
	}
}

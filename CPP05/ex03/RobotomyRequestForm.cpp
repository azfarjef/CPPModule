/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:35:01 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/10 07:22:41 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form("Default Robotomy", 72, 45)
{
	this->_target = "Default";
	std::cout << *this << " Robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy", 72, 45)
{
	this->_target = target;
	std::cout << *this << " Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	this->_target = src.getTarget();
	std::cout << *this << " Robotomy copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << *this << " Robotomy destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src.getTarget();
	std::cout << *this << " Robotomy copy assignment called" << std::endl;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeTooLowException());
	
	int status = std::rand() % 2;
	std::cout << "< Drilling noiseee >" << std::endl;
	
	if (status == 1)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		throw (RobotomyRequestForm::FailureException());
}

const char	*RobotomyRequestForm::FailureException::what() const throw()
{
	return ("Robotomy failed");
}

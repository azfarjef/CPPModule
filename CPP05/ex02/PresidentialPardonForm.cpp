/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:35:01 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/10 07:06:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Default Presidential", 25, 5)
{
	this->_target = "Default";
	std::cout << *this << " Presidential default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 25, 5)
{
	this->_target = target;
	std::cout << *this << " Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	this->_target = src.getTarget();
	std::cout << *this << " Presidential copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << *this << " Presidential destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_target = src.getTarget();
	std::cout << *this << " Presidential copy assignment called" << std::endl;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{	
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardones by Zaphod Beeblebrox" << std::endl;
}

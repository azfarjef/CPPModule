/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:50:22 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 22:07:10 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _signed(0), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name), _signed(0), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade > 150 || _exec_grade > 150)
		throw (Form::GradeTooLowException());
	else if (_sign_grade < 1 || exec_grade < 1)
		throw (Form::GradeTooHighException());
	else
		std::cout << *this << " constructor called" << std::endl;
}

Form::Form(const Form &src): _name(src.getName()), _signed(src.getSigned()), _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	std::cout << *this << " copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << *this << " destructor called" << std::endl;
}

Form	&Form::operator=(const Form &src)
{
	this->_signed = src.getSigned();
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

int					Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int					Form::getExecGrade() const
{
	return (this->_exec_grade);
}

void	Form::setSigned(bool status)
{
	this->_signed = status;
	std::cout << *this << " signed status was set to " << this->_signed << std::endl;
}

void	Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > this->_sign_grade)
		throw (Form::GradeTooLowException());
	else
	{
		this->setSigned(true);
		std::cout << *this << " has been signed by " << B << std::endl;
	}
}

const char	*Form::Exception::what() const throw()
{
	return ("FromException");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Error! Grade is too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Error! Grade is too high");
}

std::ostream	&operator<<(std::ostream &out, const Form &src)
{
	out << "Form " << src.getName() << ", sign_grade " << src.getSignGrade() << ", exec_grade " 
		<< src.getExecGrade() << ", signed status " << src.getSigned();
	return out;
}

//ex02
const char	*Form::UnsignedFormException::what() const throw()
{
	return ("Error! Form is not signed yet");
}

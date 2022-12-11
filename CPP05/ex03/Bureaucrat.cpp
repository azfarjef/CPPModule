/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:46 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 22:25:32 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->_grade = grade;
		std::cout << "Bureaucrat " << _name << ", grade " << _grade << " constructor called" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName() + "_copy")
{
	this->_grade = src.getGrade();
	std::cout << "Bareaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << ", grade " << _grade << " destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src.getGrade();
	std::cout << "Bureaucrat copy assignment called" << std::endl;
	return *this;
}

void	Bureaucrat::incrementGrade(void)
{
	std::cout << "Bureaucrat " << _name << ", grade " << _grade << " increment by 1" << std::endl;
	if (this->_grade - 1 < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	std::cout << "Bureaucrat " << _name << ", grade " << _grade << " decrement by 1" << std::endl;
	if (this->_grade + 1 > 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade += 1;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void				Bureaucrat::setGrade(const int new_grade)
{
	if (new_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (new_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade = new_grade;
	std::cout << "Bureaucrat " << _name << "'s grade was set to " << this->_grade << std::endl;
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << "Bureaucrat " << src.getName() << ", grade " << src.getGrade();
	return out;
}

// Exception functions

const char *Bureaucrat::Exception::what() const throw()
{
	return ("BureaucratException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error! Grade cannot be more than 150!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error! Grade cannot be less than 1!");
}

void	Bureaucrat::signForm(Form &F)
{
	try
	{
		F.beSigned(*this);
		std::cout << *this << " signed " << F.getName() << std::endl;
	}
	catch(Form::Exception &e)
	{
		std::cerr << *this << " couldn’t sign " << F.getName() << " <form> because " << e.what() << '\n';
	}
}

//ex02
void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << *this << " successfully executed " << form << std::endl;
	}
	catch(Form::Exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

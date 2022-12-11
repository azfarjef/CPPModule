/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:56:02 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 21:23:23 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat &src);

		void	incrementGrade(void);
		void	decrementGrade(void);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	setGrade(const int new_grade);

		class Exception: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException: public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		void	signForm(Form &F);

		//ex02
		void	executeForm(Form const &form);
		
	private:
		const std::string	_name;
		int					_grade;

};

std::ostream & operator<<(std::ostream &out, Bureaucrat const &src);

#endif

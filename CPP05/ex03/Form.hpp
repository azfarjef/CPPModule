/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:14:30 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/11 07:59:00 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int sign_grade, int exec_grade);
		Form(const Form &src);
		virtual ~Form();

		Form	&operator=(const Form &src);

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				setSigned(bool status);

		void	beSigned(Bureaucrat &B);

		class Exception: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooHighException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};

		// ex02
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class UnsignedFormException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::string const	_name;
		bool					_signed;
		int const			_sign_grade;
		int const			_exec_grade;
};

std::ostream	&operator<<(std::ostream &out, const Form &src);

#endif

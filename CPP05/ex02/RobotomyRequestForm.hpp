/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:03:44 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/10 06:47:39 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class Form;

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
		
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);

		std::string	getTarget() const;
		
		void	execute(Bureaucrat const &executor) const;

		class FailureException: public Form::Exception
		{
			public:
				virtual const char *what() const throw();
		};
	
	private:
		std::string	_target;
};

#endif

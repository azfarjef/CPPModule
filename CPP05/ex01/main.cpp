/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:21:59 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 17:07:33 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testSign(std::string name, int grade_b, int sign_grade_f, int exec_grade_f)
{
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		Bureaucrat	B(name, grade_b);
		Form		F(name, sign_grade_f, exec_grade_f);

		F.beSigned(B);
		B.decrementGrade();
	}
	catch (const Form::Exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	testSign("High", 1, 10, 10);
	testSign("Low", 150, 10, 10);
	testSign("Low", 150, 150, 10);
}

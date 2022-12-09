/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:21:59 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/09 15:05:39 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test_constructor(std::string name, int grade)
{
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		Bureaucrat B(name, grade);
		std::cout << B << std::endl;
	}
	catch(const Bureaucrat::Exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_inc_decrement(std::string name, int grade, int flag)
{
	std::cout << "------------------------------------------" << std::endl;
	Bureaucrat B(name, grade);
	
	try
	{
		if (flag == 1)
			B.incrementGrade();
		else
			B.decrementGrade();
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	test_constructor("Andrew", -42);
	test_constructor("Tate", 200);
	test_constructor("Good", 42);
	test_inc_decrement("Inc", 1, 1);
	test_inc_decrement("Dec", 150, 2);
	test_inc_decrement("Nice", 42, 1);

	std::cout << "--------------TEST COPY----------------" << std::endl;

	Bureaucrat B("Copy", 100);
	Bureaucrat C(B);
	std::cout << C << std::endl;
}

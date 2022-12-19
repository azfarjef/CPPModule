/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:37:24 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/19 21:53:06 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <typeinfo>

Base	*generate()
{
	Base	*ret;

	int random_num = std::rand() % 3;
	switch(random_num)
	{
		case 0:
			ret = new A;
			std::cout << "A generated" << std::endl;
			return (ret);
		case 1:
			ret = new B;
			std::cout << "B generated" << std::endl;
			return (ret);
		case 2:
			ret = new C;
			std::cout << "C generated" << std::endl;
			return (ret);
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "Unknown\n";
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
	std::cout << "Unknown\n";
}

int	main()
{
	std::srand(std::time(NULL));
	
	Base	*ptr = generate();
	Base	&refptr = *ptr;
	identify(ptr);
	identify(refptr);
	
	delete ptr;

	return 0;
}

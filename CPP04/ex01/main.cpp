/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:55:15 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:53:51 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define n 6

void	testDeepCopyAssignment()
{
	std::cout << "--- TEST DEEP COPY ASSIGNMENT ---" << std::endl;
	Dog a;
	{
		std::cout << "- START INSIDE -" << std::endl;
		Dog b = a;
		b.printBrain(3);
	}
	std::cout << "- END INSIDE -" << std::endl;
	a.printBrain(3);
}

void	testDeepCopy()
{
	std::cout << "--- TEST DEEP COPY---" << std::endl;
	Dog a;
	{
		std::cout << "- START INSIDE -" << std::endl;
		Dog b(a);
		b.printBrain(3);
	}
	std::cout << "- END INSIDE -" << std::endl;
	a.printBrain(3);
}


void	printAnimalIdeas(Animal **arr)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << i+1 << "  =====" << std::endl;
		arr[i]->printBrain(3);
	}
}

int	main(void)
{
	// int		n = 6;
	Animal*	animalArray[n];
	
	
	//construct animalArray
	std::cout << "--- CONSTRUCTING ---" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << i+1 << "  =====" << std::endl;
		if (i < n/2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
	}

	std::cout << "--- IDEAS ---" << std::endl;
	printAnimalIdeas(animalArray);
	
	// delete animalArray
	std::cout << "--- DESTRUCTING ---" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << i+1 << "  =====" << std::endl;
		delete animalArray[i];
	}

	testDeepCopyAssignment();
	testDeepCopy();

	return 0;
}

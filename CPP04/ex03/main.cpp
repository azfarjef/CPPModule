/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:04:37 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/09 10:27:51 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void	deepCopyTests()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* tmp;
	tmp = src->createMateria("ice");
	
	std::cout << "--- TEST DEEP COPY ASSIGNMENT ---" << std::endl;
	Character a("a");
	a.equip(tmp);
	{
		std::cout << "- START INSIDE -" << std::endl;
		// Character b = a;
		// b.printInventory();
		// b.use(0, a);
		// b.printInventory();

		Character c("c");
		tmp = src->createMateria("cure");
		c.equip(tmp);
		c.printInventory();
		c = a;
		c.printInventory();
		c.use(0, a);
		c.printInventory();
	}
	std::cout << "- END INSIDE -" << std::endl;
	a.printInventory();
	delete src;
}

void	mandatoryTests()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->printMaterias();
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->printInventory();
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	me->unequip(3);
	me->printInventory();
	
	delete bob;
	delete me;
	delete src;
}

int main()
{
	// mandatoryTests();
	deepCopyTests();
	return 0;
}

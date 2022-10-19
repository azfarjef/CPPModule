/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:43:37 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 19:27:27 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string randomIdeas()
{
	std::string	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string ret = "Idea ";
	ret += alpha[rand() % alpha.size()];

    return (ret);
}

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = randomIdeas();
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &inst)
{
	*this = inst;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = inst.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &inst)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = inst.ideas[i];
	std::cout << "Brain copy assignment called" << std::endl;
	return (*this);
}

void	Brain::printIdeas(int n)
{
	if (n < 0)
		std::cout << "Error! printIdeas(n): n must be positive int" << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << "idea " << i << ": " << this->ideas[i] << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/08 20:19:12 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual	std::string const & getName() const = 0;
		virtual	void equip(AMateria* m) = 0;
		virtual	void unequip(int idx) = 0;
		virtual	void use(int idx, ICharacter & target) = 0;

		virtual void printInventory() const = 0;
};

#endif

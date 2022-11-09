/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:54:28 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/20 20:32:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(const std::string & name);
		Character(const Character & src);
		~Character();
		
		Character	&operator=(const Character & src);

		virtual	std::string const & getName() const;
		virtual	void equip(AMateria* m);
		virtual	void unequip(int idx);
		virtual	void use(int idx, ICharacter & target);
		
		virtual void printInventory() const;

	private:
		static const int	_size = 4;

		std::string	_name;
		AMateria	*_inventory[Character::_size];
		int			_equipped;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:07 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/11 15:59:18 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	
	public:
		Weapon(std::string weapon);
		~Weapon(void);
		
		const std::string&	getType(void) const;
		bool				setType(const std::string& newType);
		
	private:
		std::string	type;
};

#endif

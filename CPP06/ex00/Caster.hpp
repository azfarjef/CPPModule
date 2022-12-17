/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:40:24 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/16 23:57:06 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>

class Caster
{
	public:
		Caster();
		Caster(std::string str);
		Caster(const Caster &src);
		~Caster();

		Caster	&operator=(const Caster &src);

		std::string	getStr() const;

		operator	char();
		operator	int();
		operator	float();
		operator	double();

	private:
		std::string	_str;
};

#endif

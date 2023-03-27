/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:32:50 by mahmad-j          #+#    #+#             */
/*   Updated: 2023/03/27 09:57:02 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include "Contact.hpp"

class	Phonebook {
	private:
		Contact	contacts[8];
		int		count;
		int		oldest;
		int		index;
	public:
		Phonebook();
		~Phonebook();

		void	add_contact(void);
		void	search_contact(void);
};

#endif
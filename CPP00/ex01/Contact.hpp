/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:36:11 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/03 20:26:38 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact {
	private:
		int					index;
		std::string			infos[5];
		static std::string	infoName[5];
		
		enum info {
			firstName = 0,
			lastName,
			nickname,
			phoneNum,
			secret
		};
	public:
		Contact();
		~Contact();
		
		bool	set_info(int index);
		void	print_info(void);
		void	print(void);
};

#endif
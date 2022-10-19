/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:08 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/10/19 18:26:37 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <stdlib.h>
# include <iostream>

class Brain {
	
	public:

		Brain();
		Brain(const Brain &inst);
		~Brain();

		Brain	&operator=(const Brain &inst);

		void	printIdeas(int n);
		
	private:

		std::string ideas[100];
};

#endif

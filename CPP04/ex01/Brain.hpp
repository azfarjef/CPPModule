/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:08 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/25 18:21:09 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {
	
	public:

		Brain();
		Brain(const Brain &inst);
		~Brain();

		Brain	&operator=(const Brain &inst);
		
	private:

		std::string ideas[100];
}

#endif
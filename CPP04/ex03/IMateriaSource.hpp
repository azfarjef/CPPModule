/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:06:40 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/09 07:50:05 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *mat) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
		
		virtual void	printMaterias() const = 0;
};

#endif

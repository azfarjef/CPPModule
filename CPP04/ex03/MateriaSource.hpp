/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:05:08 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/11/09 07:52:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource & src);

		virtual void		learnMateria(AMateria *mat);
		virtual AMateria	*createMateria(std::string const & type);

		virtual void	printMaterias() const;

	private:
		const static int	_size = 4;
		
		AMateria	*_materias[MateriaSource::_size];
		int			_learned;
};

#endif

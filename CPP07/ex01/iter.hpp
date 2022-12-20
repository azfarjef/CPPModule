/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:49:57 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/20 10:21:29 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T* array, int length, void f(T const &src))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

#endif

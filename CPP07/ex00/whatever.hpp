/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 08:30:56 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/20 08:45:36 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T & x, T & y)
{
	T	tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const &	min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template<typename T>
T const & max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

#endif

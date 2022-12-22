/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:57:20 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/22 12:29:59 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <vector>

template<typename T>
int	easyfind(T const & range, int n)
{
	typename T::const_iterator	end = range.end();
	typename T::const_iterator	it = std::find(range.begin(), end, n);
	if (it == end)
		throw(std::out_of_range("Element not found in the range"));
	return (*it);
	// return (it == end ? throw(std::out_of_range("Element not found in given range")) : *it);
}

#endif

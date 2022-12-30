/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 07:07:02 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/30 08:28:20 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <cmath> // abs()

typedef std::vector<int>::iterator	my_iter;

class Span
{
	public:
		Span(unsigned int n);
		Span(int first, int last, int dist);
		Span(const Span & src);
		~Span();

		Span &	operator=(const Span & src);

		unsigned int		getN() const;
		unsigned int		getFilled() const;
		std::vector<int>	getVector() const;

		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

		void	addNumber(my_iter start, my_iter end);
		
	private:
		unsigned int		_N;
		unsigned int		_filled;
		std::vector<int>	_vector;
};

std::ostream &	operator<<(std::ostream & o, Span const & src);

#endif

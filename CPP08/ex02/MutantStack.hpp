/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 09:25:46 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/30 09:42:34 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <algorithm>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef T*			iterator;
		typedef T const*	const_iterator;

		iterator	begin()
		{
			std::vector<T>	v;
			T				top;
			iterator		ret;
			int				n = 0;
			
			while (!this->empty())
			{
				top = this->top();
				v.push_back(top);
				this->pop();
				n++;
			}
			this->push(v[n-1]);
			n = n - 1;
			ret = &(this->top());
			while (n--)
				this->push(v[n]);
			return (ret);
		}

		iterator	end()
		{
			return (&this->top() + 1);
		}
};

#endif

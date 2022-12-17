/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:35:21 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 22:20:38 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public:
		Data();
		Data(std::string str);
		Data(const Data& src);
		~Data();

		Data &operator=(const Data& src);

		std::string	getStr() const;
		
	private:
		std::string _str;
		
};

#endif

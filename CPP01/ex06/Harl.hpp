/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 07:26:43 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/12 15:32:03 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	public:
		enum intLevel {
			errorLevel = 0,
			warningLevel,
			infoLevel,
			debugLevel,
			insignificantLevel = -1
		};

		Harl(std::string& level);
		~Harl(void);

		void	complain(const std::string& level);
		void	complain(intLevel level);
	
	private:
		intLevel	_level;
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	insignificant(void);
		
		intLevel	convertLevelToInt(std::string level);
};

#endif

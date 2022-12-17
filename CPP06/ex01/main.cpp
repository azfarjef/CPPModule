/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:58:41 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/17 22:25:28 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h> // uintptr_t

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	data("random");
	uintptr_t	uptr = serialize(&data);
	Data	*oridata = deserialize(uptr);
	
	if (oridata == &data)
		std::cout << "Same pointer value" << std::endl;
	else
		std::cout << "Different pointer value" << std::endl;

	std::cout << "COMPARE VALUE INSIDE DATA BEFORE AND AFTER SERIALIZATION" << std::endl;
	std::cout << "Before: " << data.getStr() << std::endl;
	std::cout << "After: " << oridata->getStr() << std::endl;
	return 0;
}

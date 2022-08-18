/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:29:13 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/08/18 13:30:16 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <assert.h>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	//my test
	Fixed c( Fixed( 5.05f ) / Fixed( 2 ));
	
	std::cout << c << std::endl;
	
	std::cout << Fixed::min( a, c ) << std::endl;

	//comparison operator
	assert(a < b);
	assert(b > a);
	assert(a != b);
	assert(a == a);
	
	return 0;
}

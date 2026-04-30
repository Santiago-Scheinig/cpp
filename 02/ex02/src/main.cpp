/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:07:23 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:40:34 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	if (a <= b)
	{
		if (a < b)
			std::cout << a << std::endl;
		if (a == b)
			std::cout << ++a << std::endl;
	}
	if (a >= b)
	{
		if (a > b)
			std::cout << a << std::endl;
		if (a == b)
			std::cout << a++ << std::endl;		
	}
	if (a != b)
		std::cout << b << std::endl;
	std::cout << Fixed::min( --a, b ) << std::endl;
	std::cout << Fixed::max( a--, b ) << std::endl;
	return 0;
}
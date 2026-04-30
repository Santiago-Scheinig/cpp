/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:07:23 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 20:07:15 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int		main( void ) {
	Point a(1, 1);
	Point b(-1, -1);
	Point c(1, -2);
	Point inside(0, -1);
	Point outside(0, 0);
	Point edge(0, -1.5);

	std::cout << bsp(a, b, c, inside) << std::endl;
	std::cout << bsp(a, b, c, outside) << std::endl;
	std::cout << bsp(a, b, c, edge) << std::endl;
	return (0);
}
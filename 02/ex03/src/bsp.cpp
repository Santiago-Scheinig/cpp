/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:11:51 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 20:03:10 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	resA;
	Fixed	resB;
	Fixed	resC;

	resA = Point::crossProduct(a, b, point);
	resB = Point::crossProduct(b, c, point);
	resC = Point::crossProduct(c, a, point);
	if ((resA < 0 && resB < 0 && resC < 0)
	||	(resA > 0 && resB > 0 && resC > 0))
		return (true);
	return (false);
}
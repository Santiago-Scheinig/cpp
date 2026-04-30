/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:11:59 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 20:03:35 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
public:

					Point();
					Point(const float x, const float y);
					Point(const Point& other);
	Point&			operator=(const Point& other);
					~Point();

	Fixed			getX() const;
	Fixed			getY() const;
	static Fixed	crossProduct(Point A, Point B, Point P);

private:

	const Fixed		x;
	const Fixed		y;
};

#endif
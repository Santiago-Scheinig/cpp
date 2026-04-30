/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:23:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:40:10 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

const int		Fixed::fraction = 8;

				Fixed::Fixed() : point(0) {
	std::cout << "Default constructor called\n";
}

				Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";
	this->point = roundf(value * (1 << fraction));
}

				Fixed::Fixed(const float value) {
	std::cout << "Float constructor called\n";
	this->point = roundf(value * (1 << fraction));
}

				Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed&			Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	if (this != &other) {
		this->point = other.point;
		this->setRawBits(other.getRawBits());
	}
	return *this;
}

				Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

/*--------------------------------------------------------------------------*/
/*-----------------------------OVERLOAD OPERATORS---------------------------*/
/*--------------------------------------------------------------------------*/

std::ostream&	operator<<(std::ostream& os, const Fixed& point) {
	os << point.toFloat();
	return (os);
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

int				Fixed::getRawBits(void) const {
	return (this->point);
}

void			Fixed::setRawBits(int const raw) {
	this->point = raw;
}

int				Fixed::toInt(void) const {
	return((int) this->toFloat());
}

float			Fixed::toFloat(void) const {
	return((float) this->point / (1 << this->fraction));
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
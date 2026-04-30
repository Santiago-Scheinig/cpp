/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:23:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 19:57:55 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

const int		Fixed::fraction = 8;

				Fixed::Fixed() : point(0) {
}

				Fixed::Fixed(const int value) {
	this->point = roundf(value * (1 << fraction));
}

				Fixed::Fixed(const float value) {
	this->point = roundf(value * (1 << fraction));
}

				Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed&			Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->point = other.point;
		this->setRawBits(other.getRawBits());
	}
	return *this;
}

				Fixed::~Fixed() {
}

/*--------------------------------------------------------------------------*/
/*-----------------------------OVERLOAD OPERATORS---------------------------*/
/*--------------------------------------------------------------------------*/

bool			Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool			Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool			Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}
	
bool			Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}
	
bool			Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool			Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

Fixed			Fixed::operator+(const Fixed& other) const {
	Fixed	result;
	
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed			Fixed::operator-(const Fixed& other) const {
	Fixed	result;
	
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed			Fixed::operator*(const Fixed& other) const {
	Fixed	result;
	
	result.setRawBits((long long) this->getRawBits() * other.getRawBits() >> this->fraction);
	return (result);
}

Fixed			Fixed::operator/(const Fixed& other) const {
	Fixed	result;
	
	if (!other.toFloat())
	{
		std::cerr << "Error: division by zero detected\n";
		return (*this);
	}
	result.setRawBits(((long long) this->getRawBits() << this->fraction) / other.getRawBits());
	return (result);
}

Fixed&			Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return(*this);
}

Fixed			Fixed::operator++(int) {
	Fixed	aux;

	aux = *this;
	++(*this);
	return (aux);
}

Fixed&			Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return(*this);
}

Fixed			Fixed::operator--(int) {
	Fixed	aux;

	aux = *this;
	--(*this);
	return (aux);
}

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

Fixed&			Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed&			Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return (a);
	return (b);	
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
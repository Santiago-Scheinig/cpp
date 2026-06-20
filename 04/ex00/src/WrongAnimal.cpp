/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:50:41 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:11:51 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

					WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "An WrongAnimal is being created...\n";
}

					WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

					WrongAnimal::~WrongAnimal() {
	std::cout << "An WrongAnimal has been wiped from existence.\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void				WrongAnimal::makeSound() {
	std::cout << "Abstract concepts don't make sounds, ya'know?\n";
}

void				WrongAnimal::setType(const std::string &newType) {
	this->type = newType;
}

const std::string	&WrongAnimal::getType() const {
	return(this->type);
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
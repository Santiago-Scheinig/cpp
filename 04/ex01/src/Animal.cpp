/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:40:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 20:09:26 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

					Animal::Animal() : type("Animal") {
	std::cout << "An Animal is being created...\n";
}

					Animal::Animal(const Animal& other) {
	*this = other;
}

Animal&				Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

					Animal::~Animal() {
	std::cout << "An Animal has been wiped from existence.\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void				Animal::setIdea(std::string idea) {
	(void)idea;
	std::cout << "Abstract concept can't have ideas, ya'know?\n";
}

void				Animal::think() {
	std::cout << "Abstract concept can't think, ya'know?\n";
}

void				Animal::makeSound() {
	std::cout << "Abstract concepts don't make sounds, ya'know?\n";
}

void				Animal::setType(const std::string &newType) {
	this->type = newType;
}

const std::string	&Animal::getType() const {
	return (this->type);
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:13 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:59:46 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			Dog::Dog() : mind(new Brain) {
	setType("Dog");
	std::cout << "A new stray " + getType() + " has born!\n";
}

			Dog::Dog(const Dog& other) : mind(new Brain) {
	*this = other;
}

Dog&		Dog::operator=(const Dog& other) {
	if (this != &other) {
		setType((other.getType()));
		*(this->mind) = *(other.mind);
	}
	return *this;
}

			Dog::~Dog() {
	delete mind;
	std::cout << "A stray " + getType() + " has died!\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		Dog::makeSound() {
	std::cout << "Bark Bark!\n";
}

void		Dog::setIdea(std::string idea) {
	this->mind->addIdea(idea);
}

void		Dog::think() {
	int	i;
	int	limit;

	i = -1;
	limit = this->mind->getIdeaIndex();
	while (++i < limit)
		this->mind->printIdea(i);
}
/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
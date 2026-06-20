/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:13 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:59:27 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			Cat::Cat() : mind(new Brain) {
	setType("Cat");
	std::cout << "A new stray " + getType() + " has born!\n";
}

			Cat::Cat(const Cat& other) : mind(new Brain) {
	*this = other;
}

Cat&		Cat::operator=(const Cat& other) {
	if (this != &other) {
		setType((other.getType()));
		*(this->mind) = *(other.mind);
	}
	return *this;
}

			Cat::~Cat() {
	delete mind;
	std::cout << "A stray " + getType() + " has died!\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		Cat::makeSound() {
	std::cout << "Miiaauuu\n";
}

void		Cat::setIdea(std::string idea) {
	this->mind->addIdea(idea);
}

void		Cat::think() {
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
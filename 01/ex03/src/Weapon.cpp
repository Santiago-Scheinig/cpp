/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:06 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:46:00 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

					Weapon::Weapon(std::string firstType) : type(firstType) {}

					Weapon::Weapon(const Weapon& other) {

	this->type = other.type;
}

Weapon& 			Weapon::operator=(const Weapon& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

					Weapon::~Weapon() {
}

void				Weapon::setType(const std::string newType)
{
	this->type = newType;
}

const std::string&	Weapon::getType() const
{
	return (this->type);
}
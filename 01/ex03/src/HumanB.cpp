/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:03 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/16 20:02:55 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName) 
{
	mainHand = NULL;
}

HumanB::HumanB(const HumanB& other) {
	this->name = other.name;
	this->mainHand = other.mainHand;
}

HumanB& HumanB::operator=(const HumanB& other) {
	if (this != &other) {
		this->name = other.name;
		this->mainHand = other.mainHand;
	}
	return *this;
}

HumanB::~HumanB() {
}

void	HumanB::attack() const
{
	if (!this->mainHand || (this->mainHand)->getType().empty())
		std::cout << this->name << " has nothing to attack with! \n";
	std::cout << this->name << " attacks with their " << (this->mainHand)->getType() << "\n";
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->mainHand = &newWeapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:01 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:45:16 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

		HumanA::HumanA(std::string humanName, Weapon& firstWeapon) : name(humanName), mainHand(firstWeapon) {}

		HumanA::HumanA(const HumanA& other) : name(other.name), mainHand(other.mainHand) {}

HumanA& HumanA::operator=(const HumanA& other) {
	if (this != &other) {
		this->name = other.name;
		this->mainHand = other.mainHand;
	}
	return *this;
}

		HumanA::~HumanA() {
}

void	HumanA::attack() const
{
	if (this->mainHand.getType().empty())
		std::cout << this->name << " has nothing to attack with! \n";
	std::cout << this->name << " attacks with their " << (this->mainHand).getType() << "\n";
}

void	HumanA::setWeapon(Weapon& newWeapon)
{
	this->mainHand = newWeapon;
}
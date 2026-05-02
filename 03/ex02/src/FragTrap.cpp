/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:48:59 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:53:54 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			FragTrap::FragTrap() {
	std::cout << getVersion() << " " << getName() << " is upgraded into FragTrap!\n";
	setName("Father" + getName());
	setVersion("FragTrap");
	setHitPoints(100);
	setMaxHitPoints(getHitPoints());
	setEnergyPoints(100);
	setAttackDamage(30);
}

			FragTrap::FragTrap(std::string name)
					:	ClapTrap(name) {
	std::cout << getVersion() << " " << getName() << " is upgraded into FragTrap!\n";
	setName("Father " + name);
	setVersion("FragTrap");
	setHitPoints(100);
	setMaxHitPoints(getHitPoints());
	setEnergyPoints(100);
	setAttackDamage(30);
}

			FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setVersion(other.getVersion());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

			FragTrap::~FragTrap() {
	std::cout << getVersion() + " " + getName() << " is crumbling and being downgraded to CLAPTRAP!\n";
	setVersion("ClapTrap");
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		FragTrap::highFivesGuys(void) {
	if (this->getHitPoints() > 0)
	{
		std::cout << getVersion() + " " + getName() << " asks the group for a loud HIGHFIVE!\n";
		this->setEnergyPoints((this->getEnergyPoints()) + 1);
	}
	else
		std::cout << this->getVersion() + " " + this->getName() << " is DOWN!\n";
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
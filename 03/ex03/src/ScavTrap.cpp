/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:50:32 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:53:01 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			ScavTrap::ScavTrap()
					:	m_gateKeeperMode(false) {
	std::cout << getVersion() << " " << getName() << " is upgraded into ScavTrap!\n";
	setName("Guardian " + getName());
	setVersion("ScavTrap");
	setHitPoints(HP);
	setMaxHitPoints(HP);
	setEnergyPoints(EP);
	setAttackDamage(ATK);
}

			ScavTrap::ScavTrap(std::string name)
					:	ClapTrap(name), 
						m_gateKeeperMode(false) {
	std::cout << getVersion() << " " << getName() << " is upgraded into ScavTrap!\n";
	setName("Guardian " + name);
	setVersion("ScavTrap");
	setHitPoints(HP);
	setMaxHitPoints(HP);
	setEnergyPoints(EP);
	setAttackDamage(ATK);
}

			ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setVersion(other.getVersion());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

			ScavTrap::~ScavTrap() {
	std::cout << getVersion() + " " + getName() << " is crumbling and being downgraded to FRAGTRAP!\n";
	setVersion("FragTrap");
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		ScavTrap::guardGate() {
	if (!this->m_gateKeeperMode && this->getHitPoints() > 0)
	{
		this->m_gateKeeperMode = true;
		std::cout << this->getVersion() + " " + this->getName() << " has enter mode ON GUARD\n"; 
	}
	else if (this->getHitPoints() > 0)
		std::cout << this->getVersion() + " " + this->getName() << " is already ON GUARD!\n";
	else
		std::cout << this->getVersion() + " " + this->getName() << " is DOWN!\n";
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
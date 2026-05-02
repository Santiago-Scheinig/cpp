/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 20:33:08 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 21:26:57 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

				DiamondTrap::DiamondTrap()
						   :	ClapTrap("Peasent"),
								m_name("Peasent") {
	std::cout << getVersion() << " " << getName() << " is mutated into DiamondTrap!\n";
	setName(getName() + "_clap_name");
	setVersion("DiamondTrap");
	setHitPoints(FragTrap::HP);
	setMaxHitPoints(FragTrap::HP);
	setEnergyPoints(ScavTrap::EP);
	setAttackDamage(FragTrap::ATK);
}

				DiamondTrap::DiamondTrap(std::string name) 
						   :	ClapTrap(name + "_clap_name"),
						   		m_name(name) {
	std::cout << getVersion() << " " << getName() << " is mutated into DiamondTrap!\n";
	setVersion("DiamondTrap");
	setHitPoints(FragTrap::HP);
	setMaxHitPoints(FragTrap::HP);
	setEnergyPoints(ScavTrap::EP);
	setAttackDamage(FragTrap::ATK);
}

				DiamondTrap::DiamondTrap(const DiamondTrap& other) 
						   :	ClapTrap(other),
						   		m_name(other.m_name) {
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->m_name = other.m_name;
	}
	return *this;
}

				DiamondTrap::~DiamondTrap() {
	std::cout << getVersion() + " " + this->m_name << " is crumbling and being downgraded to SCAVTRAP!\n";
	setVersion("ScavTrap");
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

bool			DiamondTrap::attack(const std::string& target) {
	return (ScavTrap::attack(target));
}

void			DiamondTrap::whoAmI() {
	std::cout << "\n" << this->m_name << ": WHO AM I?...\n";
	if (this->getHitPoints() > 0)
	{
		std::cout << "DiamondTrap name: " << this->m_name << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
		std::cout << "...[monstrous noices]\n" << std::endl;
		return ;
	}
	std::cout << "...[struggling noices]" << std::endl;
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
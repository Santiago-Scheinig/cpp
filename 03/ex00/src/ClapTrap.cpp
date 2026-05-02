/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:56:24 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 16:44:39 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			ClapTrap::ClapTrap()
		:	m_name("Soldier"),
			m_hitPoints(10),
			m_energyPoints(10),
			m_attackDamage(0) {
	std::cout << "ClapTrap " << m_name << " is ALIVE!\n";
}

			ClapTrap::ClapTrap(std::string name)
		:	m_name("Soldier " + name),
			m_hitPoints(10),
			m_energyPoints(10),
			m_attackDamage(0) {
	std::cout << "ClapTrap " << m_name << " is ALIVE!\n";
}

			ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->m_name = other.m_name;
		this->m_hitPoints = other.m_hitPoints;
		this->m_energyPoints = other.m_energyPoints;
		this->m_attackDamage = other.m_attackDamage;
	}
	return *this;
}

			ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << m_name << " finally crumbled to its inevitable DEATH!\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		ClapTrap::attack(const std::string& target) {
	if (this->m_energyPoints > 0 && this->m_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of DAMAGE!\n";
		this->m_energyPoints--;
		return;
	}
	else if (this->m_energyPoints <= 0)
		std::cout << "ClapTrap " << this->m_name << " is out of ENERGY!\n";
	else if (this->m_hitPoints <= 0)
		std::cout << "ClapTrap " << this->m_name << " is DOWN!\n";
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (this->m_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->m_name << " was hit, losing " << amount << " points of DAMAGE!\n";
		this->m_hitPoints -= amount;
		return;
	}
	std::cout << "ClapTrap " << this->m_name << " body is being DESACRATED!\n";
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (this->m_energyPoints > 0 && this->m_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->m_name << " repairs itself for " << amount << " points of DAMAGE!\n";
		this->m_hitPoints += amount;
		if (this->m_hitPoints > 10)
			this->m_hitPoints = 10;
		this->m_energyPoints--;
	}
	else if (this->m_energyPoints <= 0)
		std::cout << "ClapTrap " << this->m_name << " is out of ENERGY!\n";
	else if (this->m_hitPoints <= 0)
		std::cout << "ClapTrap " << this->m_name << " is DOWN!\n";
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
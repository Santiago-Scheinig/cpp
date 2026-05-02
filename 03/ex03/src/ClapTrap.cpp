/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:56:24 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:27:38 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			ClapTrap::ClapTrap()
					:	m_name("Peasant"),
						m_version("ClapTrap"),
						m_hitPoints(HP),
						m_maxHitPoints(HP),
						m_energyPoints(EP),
						m_attackDamage(ATK) {
	std::cout << m_version << " " << m_name << " is ALIVE!\n";
}

			ClapTrap::ClapTrap(std::string name)
					:	m_name(name),
						m_version("ClapTrap"),
						m_hitPoints(HP),
						m_maxHitPoints(HP),
						m_energyPoints(EP),
						m_attackDamage(ATK) {
	std::cout << m_version << " " << m_name << " is ALIVE!\n";
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
	std::cout << m_version + " " + m_name << " finally crumbled to its inevitable DEATH!\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		ClapTrap::setName(std::string name) {
	this->m_name = name;
}

void		ClapTrap::setVersion(std::string version) {
	this->m_version = version;
}

void		ClapTrap::setHitPoints(int amount) {
	this->m_hitPoints = amount;
}

void		ClapTrap::setMaxHitPoints(int amount) {
	this->m_maxHitPoints = amount;
}

void		ClapTrap::setEnergyPoints(int amount) {
	this->m_energyPoints = amount;
}

void		ClapTrap::setAttackDamage(int amount) {
	this->m_attackDamage = amount;
}

std::string	ClapTrap::getName() const {
	return (this->m_name);
}

std::string	ClapTrap::getVersion() const {
	return (this->m_version);
}

int			ClapTrap::getHitPoints() const {
	return (this->m_hitPoints);
}

int			ClapTrap::getEnergyPoints() const {
	return (this->m_energyPoints);
}

int			ClapTrap::getAttackDamage() const {
	return (this->m_attackDamage);
}

bool		ClapTrap::attack(const std::string& target) {
	if (this->m_energyPoints > 0 && this->m_hitPoints > 0)
	{
		std::cout << this->m_version + " " + this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of DAMAGE!\n";
		this->m_energyPoints--;
		return (true);
	}
	else if (this->m_energyPoints <= 0)
		std::cout << this->m_version + " " + this->m_name << " is out of ENERGY!\n";
	else if (this->m_hitPoints <= 0)
		std::cout << this->m_version + " " + this->m_name << " is DOWN!\n";
	return (false);
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (this->m_hitPoints > 0)
	{
		this->m_hitPoints -= amount;
		std::cout << this->m_version + " " + this->m_name << " was hit, losing " << amount << " points of DAMAGE!\n";
		return;
	}
	std::cout << this->m_version + " " + this->m_name << " body is being DESACRATED!\n";
}

bool		ClapTrap::beRepaired(unsigned int amount) {
	if (this->m_energyPoints > 0 && this->m_hitPoints > 0)
	{
		std::cout << this->m_version + " " + this->m_name << " repairs itself for " << amount << " points of DAMAGE!\n";
		this->m_hitPoints += amount;
		if (this->m_hitPoints > this->m_maxHitPoints)
			this->m_hitPoints = this->m_maxHitPoints;
		this->m_energyPoints--;
		return (true);
	}
	else if (this->m_energyPoints <= 0)
		std::cout << this->m_version + " " + this->m_name << " is out of ENERGY!\n";
	else if (this->m_hitPoints <= 0)
		std::cout << this->m_version + " " + this->m_name << " is DOWN!\n";
	return (false);
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
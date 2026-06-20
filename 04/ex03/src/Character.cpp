/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:44:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:37:55 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

					Character::Character() : _name("") {
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLOOR; i++)
		_floor[i] = NULL;
}

					Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLOOR; i++)
		_floor[i] = NULL;
}

					Character::Character(const Character& other){
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLOOR; i++)
		_floor[i] = NULL;
	*this = other;
}

Character&			Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < MAX_INVENTORY; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

					Character::~Character() {
	for (int i = 0; i < MAX_INVENTORY; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < MAX_FLOOR; i++)
		if (_floor[i])
			delete _floor[i];
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

std::string const &	Character::getName() const {
	return (this->_name);	
}

void 				Character::equip(AMateria* m) {
	if (!m)
		return ;
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
	addToFloor(m);
}

void 				Character::unequip(int idx) {
	if (idx < 0
		|| idx >= MAX_INVENTORY
		|| !_inventory[idx])
		return ;
	addToFloor(_inventory[idx]);
	_inventory[idx] = NULL;	
}

void				Character::use(int idx, ICharacter& target) {
	if (idx < 0
		|| idx >= MAX_INVENTORY
		|| !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

/*--------------------------------------------------------------------------*/
/*---------------------------------Private----------------------------------*/
/*--------------------------------------------------------------------------*/

void				Character::addToFloor(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < MAX_FLOOR; i++)
	{
		if (!_floor[i])
		{
			_floor[i] = m;
			return ;
		}
	}
	if (_floor[0])
	{
		delete _floor[0];
		_floor[0] = NULL;
	}
	for (int i = 0; i < MAX_FLOOR - 1; i++)
		_floor[i] = _floor[i + 1];		
	_floor[MAX_FLOOR - 1] = m;
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
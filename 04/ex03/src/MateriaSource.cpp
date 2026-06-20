/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:44:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:33:17 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

			MateriaSource::MateriaSource() {
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
}

			MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
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

			MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_INVENTORY; i++)
		if (_inventory[i])
			delete _inventory[i];
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void			MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
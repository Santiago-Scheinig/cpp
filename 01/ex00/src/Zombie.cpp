/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:14:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/15 19:35:40 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) : name(name) 
{}

Zombie::Zombie(const Zombie& other) {

	this->name = other.name;
}

Zombie& Zombie::operator=(const Zombie& other) {
	
	if (this != &other) {
		this->name = other.name;
	}
	return *this;
}

Zombie::~Zombie() {
	std::cout << this->name << ": Died!\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}


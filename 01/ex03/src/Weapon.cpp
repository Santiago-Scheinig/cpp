/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:06 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/12 19:13:07 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(const Weapon& other) {
	(void)other;
}

Weapon& Weapon::operator=(const Weapon& other) {
	if (this != &other) {
	}
	return *this;
}

Weapon::~Weapon() {
}
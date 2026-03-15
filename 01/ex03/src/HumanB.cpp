/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:03 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/12 19:13:04 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
}

HumanB::HumanB(const HumanB& other) {
	(void)other;
}

HumanB& HumanB::operator=(const HumanB& other) {
	if (this != &other) {
	}
	return *this;
}

HumanB::~HumanB() {
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:01 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/12 19:13:02 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {
}

HumanA::HumanA(const HumanA& other) {
	(void)other;
}

HumanA& HumanA::operator=(const HumanA& other) {
	if (this != &other) {
	}
	return *this;
}

HumanA::~HumanA() {
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:15:22 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/12 19:15:23 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::Harl(const Harl& other) {
	(void)other;
}

Harl& Harl::operator=(const Harl& other) {
	if (this != &other) {
	}
	return *this;
}

Harl::~Harl() {
}
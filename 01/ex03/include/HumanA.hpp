/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/25 19:50:26 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iomanip>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string humanName, Weapon& firstWeapon);
	HumanA(const HumanA& other);
	HumanA& operator=(const HumanA& other);
	~HumanA();

	void	attack() const;
	void	setWeapon(Weapon &newWeapon);

private:

	std::string	name;
	Weapon&		mainHand;
	
};

#endif
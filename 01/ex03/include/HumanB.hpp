/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:10 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/25 19:50:30 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iomanip>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string humanName);
	HumanB(const HumanB& other);
	HumanB& operator=(const HumanB& other);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon &newWeapon);

private:

	std::string	name;
	Weapon* 	mainHand;
	
};

#endif
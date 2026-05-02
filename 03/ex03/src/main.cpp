/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:24:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 21:26:10 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	printBattleMsg(int i)
{
	if (!i)
	{
		std::cout <<	"\n========================================================================\n"
				  		"\n         Hobgoblin in the distance growls for endless BATTLE!\n"
						"\n========================================================================\n\n";
	}
	else
	{
		std::cout <<	"\n========================================================================\n"
						"\n Suddenly! A crossfired fireball hits the battlefield! F**KING WIZARDS!\n"
						"\n========================================================================\n\n";
	}
}

int	main(void) {
	DiamondTrap	allyST1;
	DiamondTrap	allyST2("Warrior");
	DiamondTrap	enemy1("Goblin");
	DiamondTrap	enemy2("Hobgoblin");

	printBattleMsg(0);
	while (enemy1.getHitPoints() > 0 || enemy2.getHitPoints() > 0)
	{
		allyST1.guardGate();
		allyST1.beRepaired(allyST2.getEnergyPoints() / 8);
		allyST1.highFivesGuys();
		allyST1.whoAmI();
		ClapTrap::allyIA(allyST1, enemy1, enemy2);
		allyST2.guardGate();
		allyST2.beRepaired(allyST2.getEnergyPoints() / 8);
		allyST2.highFivesGuys();
		allyST2.whoAmI();
		ClapTrap::allyIA(allyST2, enemy1, enemy2);
		enemy1.guardGate();
		enemy1.beRepaired(allyST2.getEnergyPoints() / 8);
		enemy1.highFivesGuys();
		enemy1.whoAmI();
		ClapTrap::allyIA(enemy1, allyST1, allyST2);
		enemy2.guardGate();
		enemy2.beRepaired(allyST2.getEnergyPoints() / 8);
		enemy2.highFivesGuys();
		enemy2.whoAmI();
		ClapTrap::allyIA(enemy2, allyST1, allyST2);
		if (allyST1.getHitPoints() <= 0 && allyST2.getHitPoints() <= 0)
			break;
	}
	printBattleMsg(1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:24:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 19:36:53 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	ClapTrap	allyST1;
	ScavTrap	allyST2("Warrior");
	ClapTrap	enemy1("Goblin");
	ScavTrap	enemy2("Hobgoblin");

	printBattleMsg(0);
	while (enemy1.getHitPoints() > 0 || enemy2.getHitPoints() > 0)
	{
		ClapTrap::allyIA(allyST1, enemy1, enemy2);
		ClapTrap::allyIA(allyST2, enemy1, enemy2);
		ClapTrap::allyIA(enemy1, allyST1, allyST2);
		ClapTrap::allyIA(enemy2, allyST1, allyST2);
		allyST2.guardGate();
		allyST2.beRepaired(allyST2.getEnergyPoints() / 8);
		if (allyST1.getHitPoints() <= 0 && allyST2.getHitPoints() <= 0)
			break;
	}
	printBattleMsg(1);
	return (0);
}
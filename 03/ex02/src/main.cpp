/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:24:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:10:46 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	ScavTrap	allyST1;
	FragTrap	allyST2("Warrior");
	ScavTrap	enemy1("Goblin");
	FragTrap	enemy2("Hobgoblin");

	printBattleMsg(0);
	while (enemy1.getHitPoints() > 0 || enemy2.getHitPoints() > 0)
	{
		ClapTrap::allyIA(allyST1, enemy1, enemy2);
		ClapTrap::allyIA(allyST2, enemy1, enemy2);
		ClapTrap::allyIA(enemy1, allyST1, allyST2);
		ClapTrap::allyIA(enemy2, allyST1, allyST2);
		allyST1.guardGate();
		allyST1.beRepaired(allyST2.getEnergyPoints() / 8);
		allyST2.highFivesGuys();
		if (allyST1.getHitPoints() <= 0 && allyST2.getHitPoints() <= 0)
			break;
	}
	printBattleMsg(1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:56:21 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 16:40:42 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap			allyCT1;
	ClapTrap			allyCT2("Albert");
	const std::string	enemyBugbear = "Bugbear";
	const std::string	enemyGoblin = "Goblin";

	std::cout << enemyBugbear << " growls for endless BATTLE!\n";
	allyCT1.attack(enemyBugbear);
	allyCT2.attack(enemyGoblin);
	std::cout << enemyGoblin << " attacks one of ours!\n";
	allyCT1.takeDamage(4);
	std::cout << enemyBugbear << " charges into our lines!\n";
	allyCT1.takeDamage(7);
	allyCT2.takeDamage(7);
	allyCT1.beRepaired(10);
	allyCT2.beRepaired(10);
	std::cout << enemyGoblin << " attacks one of ours!\n";
	allyCT2.takeDamage(4);
	std::cout << enemyBugbear << " charges into our lines!\n";
	allyCT2.takeDamage(7);
	return (0);
}
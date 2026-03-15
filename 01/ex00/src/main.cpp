/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:14:05 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/15 19:17:45 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	lonelyZombie;

	lonelyZombie = newZombie("");
	lonelyZombie->announce();
	delete lonelyZombie;
	randomChump("");
	return (0);
}
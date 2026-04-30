/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:14:05 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:43:05 by sscheini         ###   ########.fr       */
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
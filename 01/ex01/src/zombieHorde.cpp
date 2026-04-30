/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:56 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:44:22 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	newHorde;
	int		i;

	i = 0;
	newHorde = new Zombie[N];
	while (i < N)
		newHorde[i++].setName(name);
	return (newHorde);
}
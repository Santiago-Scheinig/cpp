/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:58 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/15 19:53:28 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*firstWave;
	int		N = N_ZOMBIES;
	int		i;

	firstWave = zombieHorde(N, "Horde");
	i = 0;
	while (i < N)
	{
		firstWave[i].announce();
		i++;
	}
	delete[] firstWave;
	return (0);
}
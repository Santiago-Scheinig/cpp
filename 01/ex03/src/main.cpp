/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:05 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:45:40 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

return 0;

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:56:50 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 19:57:03 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
	public:

					ClapTrap();
					ClapTrap(std::string name);
					ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);
					~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:

		std::string	m_name;
		int			m_hitPoints;
		int			m_energyPoints;
		int			m_attackDamage;
};

#endif
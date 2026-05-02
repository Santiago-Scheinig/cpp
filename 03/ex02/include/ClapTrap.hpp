/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:56:50 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 19:44:20 by sscheini         ###   ########.fr       */
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
		virtual		~ClapTrap();

		void		setName(std::string name);
		void		setVersion(std::string version);
		void		setHitPoints(int amount);
		void		setMaxHitPoints(int amount);
		void		setEnergyPoints(int amount);
		void		setAttackDamage(int amount);
	
		std::string	getName() const;
		std::string	getVersion() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
	
		bool		attack(const std::string& target);
		bool		beRepaired(unsigned int amount);
		void		takeDamage(unsigned int amount);

		template	<typename T, typename U, typename V>
		static void		allyIA(T& IA, U& enemyA, V& enemyB)
		{
			if (enemyA.getHitPoints() > 0 && enemyA.getHitPoints() <= enemyB.getHitPoints())
			{
				if (IA.attack(enemyA.getName()))
					enemyA.takeDamage(IA.getAttackDamage());
				return;
			}
			if (IA.attack(enemyB.getName()))
				enemyB.takeDamage(IA.getAttackDamage());
		}

private:

	std::string		m_name;
	std::string		m_version;
	int				m_hitPoints;
	int				m_maxHitPoints;
	int				m_energyPoints;
	int				m_attackDamage;
	
};

#endif
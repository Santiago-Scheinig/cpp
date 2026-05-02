/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:50:52 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:38:25 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		static const int	HP = 100;
		static const int	EP = 50;
		static const int	ATK = 20;

							ScavTrap();
							ScavTrap(std::string name);
							ScavTrap(const ScavTrap& other);
		ScavTrap&			operator=(const ScavTrap& other);
							~ScavTrap();

		void				guardGate();

	private:

		bool		m_gateKeeperMode;
};

#endif
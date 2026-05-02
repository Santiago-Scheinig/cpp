/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:50:52 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:28 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

					ScavTrap();
					ScavTrap(std::string name);
					ScavTrap(const ScavTrap& other);
		ScavTrap&	operator=(const ScavTrap& other);
					~ScavTrap();

		void		guardGate();

	private:

		bool		m_gateKeeperMode;
};

#endif
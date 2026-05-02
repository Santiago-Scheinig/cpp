/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:50:21 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:38:10 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		static const int	HP = 100;
		static const int	EP = 100;
		static const int	ATK = 30;

							FragTrap();
							FragTrap(std::string name);
							FragTrap(const FragTrap& other);
		FragTrap&			operator=(const FragTrap& other);
							~FragTrap();

		void				highFivesGuys(void);
	
	private:
	
};

#endif
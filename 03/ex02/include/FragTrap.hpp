/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:50:21 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/02 20:30:21 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:

					FragTrap();
					FragTrap(std::string name);
					FragTrap(const FragTrap& other);
		FragTrap&	operator=(const FragTrap& other);
					~FragTrap();

		void		highFivesGuys(void);
	
	private:
	
};

#endif
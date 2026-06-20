/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:45:14 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:29:19 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : virtual public AMateria {
	public:

					Ice();
					Ice(const Ice& other);
		Ice&		operator=(const Ice& other);
					~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);	
};

#endif
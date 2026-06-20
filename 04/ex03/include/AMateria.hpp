/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:45:00 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:36:05 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
 
class AMateria {
	protected:
	
		std::string			_type;
		
	public:

							AMateria();
							AMateria(std::string const & type);
							AMateria(const AMateria& other);
		AMateria&			operator=(const AMateria& other);
		virtual				~AMateria();			

		std::string	const & getType() const;

		virtual AMateria*	clone() const = 0;

		virtual void		use(ICharacter& target);
};

#endif

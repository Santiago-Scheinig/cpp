/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:45:29 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:29:10 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria {
	public:

					Cure();
					Cure(const Cure& other);
		Cure&		operator=(const Cure& other);
					~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
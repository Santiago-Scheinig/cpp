/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:44:40 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:12:17 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# ifndef MAX_INVENTORY
#  define MAX_INVENTORY 4
# endif

class MateriaSource : public IMateriaSource {
	public:

						MateriaSource();
						MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
						~MateriaSource();

		void			learnMateria(AMateria*);
		AMateria*		createMateria(std::string const & type);

	private:

		AMateria*	_inventory[MAX_INVENTORY];
};

#endif
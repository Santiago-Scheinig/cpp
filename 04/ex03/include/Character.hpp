/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:44:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/20 14:35:52 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# ifndef MAX_INVENTORY
#  define MAX_INVENTORY 4
# endif

# ifndef MAX_FLOOR
#  define MAX_FLOOR 10
# endif

class Character : public ICharacter {
	public:

							Character();
							Character(std::string name);
							Character(const Character& other);
		Character&			operator=(const Character& other);
							~Character();
					
		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:

		std::string	_name;
		AMateria*	_inventory[MAX_INVENTORY];
		AMateria*	_floor[MAX_FLOOR];

		void		addToFloor(AMateria *m);
};

#endif
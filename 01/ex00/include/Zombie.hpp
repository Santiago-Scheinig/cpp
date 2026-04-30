/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:14:03 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:42:41 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

/**
 * @brief	Represents a Zombie entity with a name and basic behavior.
 * 
 * 			The Zombie class models a zombie character that can be instantiated with or
 * 			without a name, copied, and assigned. It provides a simple announcement
 * 			behavior through its announce method, and follows the canonical Orthodox
 * 			Canonical Form by implementing a copy constructor and copy assignment operator.
 * 
 * @note	Manages its own name as a private std::string member.
 * @note	Follows the Orthodox Canonical Form (default constructor, copy constructor,
 * 			copy assignment operator, and destructor).
 * 
 */
class Zombie {
public:
	/**
	 * @brief	Default constructor. Initializes a Zombie with an empty name.
	 */
				Zombie();

	/**
	 * @brief	Parameterized constructor. Initializes a Zombie with the given name.
	 * 
	 * @param	name	The name to assign to the Zombie.
	 */
				Zombie(std::string name);

	/**
	 * @brief	Copy constructor. Creates a new Zombie as a copy of another.
	 * 
	 * @param	other	The Zombie instance to copy from.
	 */
				Zombie(const Zombie& other);

	/**
	 * @brief	Copy assignment operator. Assigns the state of another Zombie to this one.
	 * 
	 * @param	other	The Zombie instance to assign from.
	 * @return			A reference to the updated Zombie instance.
	 */
	Zombie& 	operator=(const Zombie& other);

	/**
	 * @brief	Destructor. Cleans up the Zombie instance.
	 */
				~Zombie();

	/**
	 * @brief	Announces the Zombie's presence by printing its name to the standard output.
	 */
	void		announce(void);

private:
	std::string	name;	///< The name identifying the Zombie.
};

/**
 * @brief	Allocates and returns a new Zombie instance on the heap with the given name.
 * 
 * @param	name	The name to assign to the newly created Zombie.
 * @return			A pointer to the newly heap-allocated Zombie.
 * 
 * @note	The caller is responsible for managing the lifetime of the returned Zombie
 * 			and must ensure it is properly deleted to avoid memory leaks.
 */
Zombie*			newZombie(const std::string& name);

/**
 * @brief	Creates a temporary Zombie with the given name on the stack and makes it announce itself.
 * 
 * @param	name	The name to assign to the temporary Zombie.
 * 
 * @note	The Zombie created by this function is stack-allocated and will be automatically
 * 			destroyed when the function returns.
 */
void			randomChump(const std::string& name);

#endif

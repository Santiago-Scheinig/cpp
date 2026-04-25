/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:11 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/25 19:50:32 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	
public:

	Weapon(std::string	firstType);
	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);
	~Weapon();

	const std::string&	getType() const;
	void				setType(const std::string newType);

private:

	std::string type;	
};

#endif
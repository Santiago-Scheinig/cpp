/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:45:03 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 17:43:26 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	public:

							WrongAnimal();
							WrongAnimal(const WrongAnimal& other);
		WrongAnimal&		operator=(const WrongAnimal& other);
		virtual				~WrongAnimal();
		
		void				makeSound();
		void				setType(const std::string &newType);
		const std::string	&getType() const;

	private:

		std::string		type;
};

#endif
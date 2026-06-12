/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:40:38 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/07 17:58:49 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	public:

						Animal();
						Animal(const Animal& other);
		Animal&			operator=(const Animal& other);
		virtual			~Animal();

		virtual void	makeSound();

	private:

		std::string	type;
	
};

#endif
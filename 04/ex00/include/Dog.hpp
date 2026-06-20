/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:26 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:11:41 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : virtual public Animal {
	public:

				Dog();
				Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
				~Dog();

		void	makeSound();

	private:

	
};

#endif
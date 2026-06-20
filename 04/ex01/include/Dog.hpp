/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:26 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 20:09:45 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal {
	public:

				Dog();
				Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
				~Dog();

		void	makeSound();
		void	setIdea(std::string idea);
		void	think();

	private:

		Brain	*mind;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:24 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/07 17:49:36 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog : virtual public Animal{
	public:

				Dog();
				Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
				~Dog();

		void	makeSound();

	private:

	
};

#endif
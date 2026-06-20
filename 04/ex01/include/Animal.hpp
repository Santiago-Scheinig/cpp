/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:40:38 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 20:09:38 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:

							Animal();
							Animal(const Animal& other);
		Animal&			operator=(const Animal& other);
		virtual				~Animal();

		virtual void		makeSound();
		virtual void		setIdea(std::string Idea);
		virtual void		think();

		const std::string	&getType() const;
		void				setType(const std::string &newType);

	private:

		std::string			type;
	
};

#endif
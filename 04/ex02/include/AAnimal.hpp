/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:40:38 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 20:09:50 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
	public:

							AAnimal();
							AAnimal(const AAnimal& other);
		AAnimal&			operator=(const AAnimal& other);
		virtual				~AAnimal();

		virtual void		makeSound() = 0;
		virtual void		setIdea(std::string Idea) = 0;
		virtual void		think() = 0;

		const std::string	&getType() const;
		void				setType(const std::string &newType);

	private:

		std::string			type;
	
};

#endif
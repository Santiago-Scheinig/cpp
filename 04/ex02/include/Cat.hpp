/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:26 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:41:37 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal {
	public:

				Cat();
				Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
				~Cat();

		void	makeSound();
		void	setIdea(std::string idea);
		void	think();

	private:

		Brain	*mind;
};

#endif
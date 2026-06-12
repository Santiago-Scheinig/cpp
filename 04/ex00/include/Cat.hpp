/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:42:26 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/07 17:49:42 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Cat : virtual public Animal{
	public:

				Cat();
				Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
				~Cat();

		void	makeSound();

	private:

	
};

#endif
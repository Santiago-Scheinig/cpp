/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:45:01 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/07 17:49:57 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
	public:

					WrongDog();
					WrongDog(const WrongDog& other);
		WrongDog&	operator=(const WrongDog& other);
					~WrongDog();

		void		makeSound();

	private:

	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:45:02 by sscheini          #+#    #+#             */
/*   Updated: 2026/05/07 18:01:51 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:

					WrongCat();
					WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
					~WrongCat();

		void		makeSound();

	private:

	
};

#endif
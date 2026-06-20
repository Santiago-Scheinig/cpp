/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:08:03 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:54:37 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	public:

				Brain();
				Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
				~Brain();

		void	addIdea(std::string idea);
		void	printIdea(int i);
		int		getIdeaIndex();

	private:

		int			ideaIndex;
		std::string	ideas[100];
};

#endif
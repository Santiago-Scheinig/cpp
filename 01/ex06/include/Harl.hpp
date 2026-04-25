/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:15:23 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/25 20:32:16 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Harl {
public:

	Harl();
	Harl(const Harl &src);
	Harl &operator=(const Harl &src);
	~Harl();

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
};

#endif
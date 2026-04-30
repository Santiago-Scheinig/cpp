/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:23:28 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:41:21 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
public:

						Fixed();
						Fixed(const Fixed& other);
	Fixed& 				operator=(const Fixed& other);
						~Fixed();

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

private:

	int 				point;
	static const int	fraction;	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:23:28 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 19:58:08 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
public:

						Fixed();
						Fixed(const int value);
						Fixed(const float value);
						Fixed(const Fixed& other);
	Fixed&				operator=(const Fixed& other);
						~Fixed();
	
	bool				operator>(const Fixed& other) const;
	bool 				operator>=(const Fixed& other) const;
	bool 				operator<(const Fixed& other) const;
	bool 				operator<=(const Fixed& other) const;
	bool 				operator==(const Fixed& other) const;
	bool 				operator!=(const Fixed& other) const;
	
	Fixed 				operator+(const Fixed& other) const;
	Fixed 				operator-(const Fixed& other) const;
	Fixed 				operator*(const Fixed& other) const;
	Fixed 				operator/(const Fixed& other) const;
	
	Fixed& 				operator++(void);
	Fixed 				operator++(int);
	Fixed& 				operator--(void);
	Fixed 				operator--(int);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);

	static const		Fixed& min(const Fixed& a, const Fixed& b);
	static const		Fixed& max(const Fixed& a, const Fixed& b);

private:

	int 				point;
	static const int	fraction;	
};

	std::ostream&		operator<<(std::ostream& os, const Fixed& point);

#endif
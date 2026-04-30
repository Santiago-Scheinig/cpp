/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:10:14 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:47:45 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/**
 * @brief	Prints command line arguments in uppercase.
 *
 *			If no arguments are provided, prints a default
 *			feedback message and exits. Otherwise, converts
 *			all characters from argv[1] to argv[argc - 1]
 *			to uppercase and prints the resulting string.
 *
 * @param	argc	Number of command line arguments.
 * @param	argv	Array of argument strings.
 *
 * @note	Argument at index 0 is ignored.
 * @note	Uses std::toupper for character conversion.
 *
 * @return	0 on successful execution.
 */
int	main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; ++i)
		for (int j = 0; argv[i][j]; ++j)
				str.push_back(static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j]))));
	std::cout << str << "\n";
	return (0);
}
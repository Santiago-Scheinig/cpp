/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:50:32 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"

/**
 * @brief	Entry point of the myPhoneBook application.
 *
 *			Initializes a PhoneBook instance and processes
 *			user commands in a loop until termination.
 *
 *			Accepted commands:
 *				- ADD:		Adds a new contact.
 *				- SEARCH:	Displays and searches contacts.
 *				- EXIT:		Terminates the program.
 *
 *			Loop exits on EXIT command or on input
 *			stream failure (EOF or error state).
 *
 * @param	argc	Number of command line arguments.
 * @param	argv	Array of argument strings.
 *
 * @note	Returns 1 if argument validation fails.
 * @note	Handles EOF detection gracefully.
 *
 * @return	0 on normal termination.
 */
int	main(int argc, char *argv[]) {

	PhoneBook	myPhoneBook;
	std::string	tmp;

	if (!argc || !argv || !argv[0])
		return (1);
	while (true)
	{
		tmp = UserInterface::getInput("\nAvalible User Commands: ADD | SEARCH | EXIT\n");
		if (!tmp.compare("ADD"))
			UserInterface::commandAdd(myPhoneBook);
		else if (!tmp.compare("SEARCH"))
			UserInterface::commandSearch(myPhoneBook);
		else if (!tmp.compare("EXIT"))
			break ;
		else {
			std::cout << "Invalid Command. Please enter a valid User Command.\n";
		}
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << "\nEnd Of File detected. Terminating \"myPhoneBook\".\n";
			break ;
		}
	}
	return (0);
}
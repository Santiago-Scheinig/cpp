/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:21 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:49:03 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERINTERFACE_HPP
#define USERINTERFACE_HPP

#include "PhoneBook.hpp"
#include <stdlib.h>
#include <limits>

/**
 * @brief	Class providing user interface functionalities for the myPhoneBook application.
 * 
 * 			The UserInterface class contains static methods for handling user input, validating
 *			phone numbers, and executing commands related to the PhoneBook. It serves as an
 * 			abstraction layer between the user and the underlying PhoneBook data structure, ensuring
 * 			that inputs are properly formatted and that commands are executed correctly.
 * 
 * @note	All methods are static, as the UserInterface does not maintain any state.
 * @note	Includes input validation for phone numbers and trimming of user input.
 * @note	Handles command execution for adding and searching contacts in the PhoneBook.
 * 
 */
class UserInterface {

public:
	
	/**
	 * @brief			Prompts user and retrieves input.
	 *
	 *					Displays a message and reads a line
	 *					from standard input.
	 *
	 *					Trims whitespace and rejects empty
	 *					input until valid data is entered.
	 *
	 * @param			message	Prompt message to display.
	 *
	 * @return			Validated trimmed string or empty
	 *					string on input failure.
	 */
	static std::string 	getInput(const std::string& message);

	/**
	 * @brief	Handles the ADD user command.
	 *
	 *			Prompts the user for contact fields
	 *			and validates phone number input.
	 *
	 *			Aborts insertion if any field is
	 *			empty. Adds contact on success.
	 *
	 * @param	myPhoneBook	PhoneBook instance to
	 *						modify.
	 */
	static void 		commandAdd(PhoneBook& myPhoneBook);

	/**
	 * @brief	Handles the SEARCH user command.
	 *
	 *			Lists stored contacts and prompts
	 *			for a valid index selection.
	 *
	 *			Validates numeric input and ensures
	 *			index is within valid bounds.
	 *
	 * @param	myPhoneBook	PhoneBook instance to
	 *						query.
	 *
	 * @note	Displays error if no contacts exist.
	 */
	static void 		commandSearch(PhoneBook& myPhoneBook);

private:

	/**
	 * @brief	Default constructor for UserInterface.
	 *
	 *			Private to prevent instantiation of
	 *			this utility class.
	 */
						UserInterface() {};

	/**
	 * @brief			Removes leading and trailing whitespace.
	 *
	 *					Trims spaces, tabs, and newline
	 *					characters from both ends of input.
	 *
	 * @param			input	String to trim.
	 *
	 * @return			Trimmed string or empty string if
	 *					no non-whitespace characters exist.
	 */
	static std::string	trimInput(const std::string &input);

	/**
	 * @brief	Validates that a string contains digits.
	 *
	 *			Checks whether all characters in the
	 *			provided string are numeric digits.
	 *
	 * @param	phoneNumber	String to validate.
	 *
	 * @return	true if string contains only digits,
	 *			false otherwise.
	 */
	static bool			validateNumber(const std::string& phoneNumber);
};

#endif
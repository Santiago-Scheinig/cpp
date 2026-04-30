/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:23 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:51:52 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

/**
 * @brief	Class representing a contact in the phone book.
 *
 *			The Contacts class encapsulates the details of a single
 *			contact, including their first name, last name, nickname,
 *			phone number, and darkest secret. It provides constructors,
 *			accessors, and mutators for managing contact information.
 *
 * @note	All fields are stored as std::string objects.
 */
class Contact {

public:

	/**
	* @brief	Default constructor for Contacts.
	*
	*			Initializes all contact fields to empty
	*			strings.
	*/
						Contact();

	/**
	 * @brief	Constructs a Contacts object with data.
	 *
	 *			Initializes all fields with the provided
	 *			values.
	 *
	 * @param	firstName	Contact's first name.
	 * @param	lastName	Contact's last name.
	 * @param	nickName	Contact's nickname.
	 * @param	phoneNumber	Contact's phone number.
	 * @param	darkestSecret	Contact's darkest secret.
	 */
						Contact(const std::string& firstName,
								const std::string& lastName,
								const std::string& nickName,
								const std::string& phoneNumber,
								const std::string& darkestSecret);

	/**
	 * @brief	Copy constructor for Contacts.
	 *
	 *			Creates a new Contacts object as a copy
	 *			of another instance.
	 *
	 * @param	other	Contacts instance to copy from.
	 */
						Contact(const Contact& other);

	/**
	 * @brief	Copy assignment operator.
	 *
	 *			Assigns the values from another Contacts
	 *			instance to this object.
	 *
	 * @param	other	Contacts instance to assign from.
	 *
	 * @return	Reference to the assigned object.
	 */
	Contact&			operator=(const Contact& other);

	/**
	 * @brief	Destructor for Contacts.
	 *
	 *			Performs cleanup when a Contacts object
	 *			is destroyed.
	 */
						~Contact();
	
	/**
	 * @brief			Retrieves the contact's first name.
	 *
	 * @return			String containing the first name.
	 */	
	const std::string 	getFirstName() const;
	
	/**
	 * @brief			Retrieves the contact's last name.
	 *
	 * @return			String containing the last name.
	 */
	const std::string 	getLastName() const;
	
	
	/**
	 * @brief			Retrieves the contact's nickname.
	 *
	 * @return			String containing the nickname.
	 */
	const std::string 	getNickName() const;
		
	/**
 	* @brief			Retrieves the contact's phone number.
 	*
 	* @return			String containing the phone number.
 	*/
	const std::string 	getPhoneNumber() const;
	
	/**
	 * @brief			Retrieves the contact's darkest secret.
	 *
	 * @return			String containing the darkest secret.
	 */
	const std::string 	getDarkestSecret() const;

private:

	std::string			firstName;
	std::string			lastName;
	std::string			nickName;
	std::string			phoneNumber;
	std::string			darkestSecret;

};

#endif
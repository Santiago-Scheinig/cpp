/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:22 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:48:41 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

/**
 * @brief	Class representing a simple phone book application.
 * 
 * 			The PhoneBook class manages a list of contacts, allowing
 * 			users to add new contacts, search existing ones, and display
 * 			contact information. It maintains an internal array of Contacts
 * 			objects and tracks the number of valid contacts stored.
 * 
 * @note	The phone book can store a maximum of 8 contacts. When
 *			the limit is exceeded, the oldest contact is removed to
 *			make room for the new one.
 */
class PhoneBook {

public:

	/**
 	* @brief	Default constructor for PhoneBook.
 	*
 	*			Initializes the contact list and sets
 	*			the number of stored contacts to zero.
 	*/
				PhoneBook();

	/**
	 * @brief	Copy constructor for PhoneBook.
	 *
	 *			Creates a new PhoneBook as a copy of
	 *			another instance.
	 *
	 * @param	other	PhoneBook instance to copy from.
	 */
				PhoneBook(const PhoneBook& other);

	/**
	 * @brief	Copy assignment operator.
	 *
	 *			Copies all contacts from another
	 *			PhoneBook instance.
	 *
	 * @param	other	PhoneBook instance to assign from.
	 *
	 * @return	Reference to the assigned object.
	 */
	PhoneBook& 	operator=(const PhoneBook& other);
	
	/**
	 * @brief	Destructor for PhoneBook.
	 *
	 *			Releases resources associated with the
	 *			PhoneBook instance.
	 */
				~PhoneBook();

	/**
 	* @brief	Retrieves the number of contacts stored.
 	*
 	* @return	Current number of valid contacts.
 	*/
	int 		getNumberOfContacts() const;
	
	/**
	 * @brief	Adds a new contact to the PhoneBook.
	 *
	 *			Inserts the contact if space is
	 *			available, otherwise removes the
	 *			oldest contact before insertion.
	 *
	 * @param	newContact	Array containing the
	 *						contact fields.
	 */
	void 		addContact(const std::string (&newContact)[5]);
	
	/**
	 * @brief	Prints detailed contact information.
	 *
	 *			Displays all stored fields for the
	 *			contact at the given index.
	 *
	 * @param	index	Index of the contact to print.
	 *
	 * @note	Prints an error message if index is
	 *			out of range.
	 */
	void 		displayContact(int index) const;
	
	/**
	 * @brief	Lists all stored contacts in table form.
	 *
	 *			Displays index, first name, last name,
	 *			and nickname formatted in columns.
	 */
	void 		listContacts() const;

private:
	
	Contact		list[8];
	int			numberOfContacts;

	/**
	 * @brief	Shifts contacts left and inserts new one.
	 *
	 *			Removes the oldest contact and appends
	 *			the provided contact at the end.
	 *
	 * @param	newContact	Contact to insert.
	 */
	void 		pushFront(Contact& newContact);
	
	/**
	 * @brief	Truncates contact info to fit width.
	 *
	 *			If the string length is greater than or
	 *			equal to ten characters, truncates it to
	 *			nine characters and appends a dot.
	 *
	 * @param	info	String to truncate.
	 *
	 * @return	Formatted string of max width ten.
	 */
	std::string	truncateContactInfo(const std::string& info) const;
};

#endif
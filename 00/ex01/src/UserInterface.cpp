/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:16 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:51:46 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"

/*--------------------------------------------------------------------------*/
/*----------------------------------PRIVATE---------------------------------*/
/*--------------------------------------------------------------------------*/

bool		UserInterface::validateNumber(const std::string& phoneNumber) {

	size_t len;

	len = phoneNumber.length();
	for (size_t i = 0; i < len; i++)
		if (!isdigit(phoneNumber[i]))
			return (false);
	return (true);
}

std::string	UserInterface::trimInput(const std::string &input) {

	size_t start;
	size_t end;

	start = input.find_first_not_of(" \t\n\r");
	if (start == std::string::npos)
		return ("");
	end = input.find_last_not_of(" \t\n\r");
	return (input.substr(start, end - start + 1));
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void		UserInterface::commandAdd(PhoneBook& myPhoneBook) {

	std::string newContact[5];
	bool valid = false;

	newContact[0] = getInput("\nInsert First Name:\n");
	if (newContact[0].empty())
		return ;
	newContact[1] = getInput("\nInsert Last Name:\n");
	if (newContact[1].empty())
		return ;
	newContact[2] = getInput("\nInsert Nickname:\n");
	if (newContact[2].empty())
		return ;
	while (!valid)
	{
		newContact[3] = getInput("\nInsert Phone Number: \n");
		if (newContact[3].empty())
			return ;
		valid = validateNumber(newContact[3]);
		if (!valid)
			std::cout << "Invalid Phone Number. Please use only numeric characters \'0\' to \'9\'.\n";
	}
	newContact[4] = getInput("\nInsert Darkest Secret: \n");
	if (newContact[4].empty())
		return ;
	myPhoneBook.addContact(newContact);
}

void		UserInterface::commandSearch(PhoneBook& myPhoneBook) {
	
	std::string	tmp;
	bool		valid = false;
	int			ui = -1;

	if (myPhoneBook.getNumberOfContacts() == 0)
	{
		std::cout << "No contacts in \"myPhoneBook\". Please ADD a contact before using the SEARCH command.\n";
		return ;
	}
	myPhoneBook.listContacts();
	while (!valid)
	{
		tmp = getInput("\nInsert Contact Index: \n");
		valid = validateNumber(tmp);
		if (!valid)
		{
			std::cout << "Invalid Index Number. Please use only numeric characters \'0\' to \'7\'.\n";
			continue;
		}
		ui = atoi(tmp.c_str());
		if (ui > 7)
		{
			valid = false;
			std::cout << "Invalid Index Number. Please use only numeric characters \'0\' to \'7\'.\n";
		}
	}
	myPhoneBook.displayContact(ui);
}

std::string	UserInterface::getInput(const std::string& message) {

	std::string tmp;

	while (tmp.empty())
	{
		std::cout << message;
		if (!std::getline(std::cin, tmp))
			return ("");
		tmp = trimInput(tmp);
		if (tmp.empty())
			std::cout << "Input cannot be empty. Please enter a valid input.\n\n";
	}
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:14 by sscheini          #+#    #+#             */
/*   Updated: 2026/02/20 20:23:59 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

PhoneBook::PhoneBook() : numberOfContacts(0) {}

PhoneBook::PhoneBook(const PhoneBook& other) {
	
	for (int i = 0; i < 8; i++)
		this->list[i] = other.list[i];
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other) {
	
	if (this != &other) {
		for (int i = 0; i < 8; i++)
			this->list[i] = other.list[i];
	}
	return *this;
}

PhoneBook::~PhoneBook() {}

/*--------------------------------------------------------------------------*/
/*----------------------------------PRIVATE---------------------------------*/
/*--------------------------------------------------------------------------*/

void PhoneBook::pushFront(Contact& newContact)
{
	
	for (int i = 0; i < 7; i++)
		this->list[i]  = this->list[i + 1];
	this->list[7] = newContact;
}

std::string PhoneBook::truncateContactInfo(const std::string& info) const {
	
	std::string truncatedInfo;

	if (info.length() >= 10)
		truncatedInfo = info.substr(0, 9) + ".";
	else
		truncatedInfo = info;
	return truncatedInfo;
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

int PhoneBook::getNumberOfContacts() const {

	return (this->numberOfContacts);
}

void PhoneBook::addContact(const std::string (&newContact)[5]) {
	
	Contact tmp(newContact[0], newContact[1], newContact[2], newContact[3], newContact[4]);

	if (this->numberOfContacts < 8)
	{
		this->list[this->numberOfContacts] = tmp;
		this->numberOfContacts++;
	}
	else
		pushFront(tmp);
}

void PhoneBook::displayContact(int index) const {

	if (index >= 0 && index < this->numberOfContacts)
	{
		std::cout << "\nFirst Name: " << list[index].getFirstName() << ".\n";
		std::cout << "Last Name: " << list[index].getLastName() << ".\n";
		std::cout << "Nickname: " << list[index].getNickName() << ".\n";
		std::cout << "Phone Number: " << list[index].getPhoneNumber() << ".\n";
		std::cout << "Darkest Secret: " << list[index].getDarkestSecret() << ".\n";
	}
	else
		std::cout << "Contact at index " << index << " is empty or does not exist.\n";
}

void PhoneBook::listContacts() const {

	std::cout << std::setw(10) << "Index" << "|" 
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nick Name" << "\n";
	
	for (int i = 0; i < this->numberOfContacts; i++)
	{
		std::cout << std::setw(10) << i << "|" 
			<< std::setw(10) << truncateContactInfo(this->list[i].getFirstName()) << "|"
			<< std::setw(10) << truncateContactInfo(this->list[i].getLastName()) << "|"
			<< std::setw(10) << truncateContactInfo(this->list[i].getNickName()) << "\n";
	}
}

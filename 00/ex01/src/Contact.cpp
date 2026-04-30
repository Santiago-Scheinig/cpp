/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:13:19 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:50:24 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

					Contact::Contact()
							:	firstName(""),
								lastName(""),
								nickName(""),
								phoneNumber(""),
								darkestSecret("") {
}

					Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& nickName, const std::string& phoneNumber, const std::string& darkestSecret)
							:	firstName(firstName),
								lastName(lastName), 
								nickName(nickName), 
								phoneNumber(phoneNumber), 
								darkestSecret(darkestSecret) {
}

					Contact::Contact(const Contact& other) {
	
	firstName = other.firstName;
	lastName = other.lastName;
	nickName = other.nickName;
	phoneNumber = other.phoneNumber;
	darkestSecret = other.darkestSecret;
}

Contact&			Contact::operator=(const Contact& other) {
	
	if (this != &other) {
		firstName = other.firstName;
		lastName = other.lastName;
		nickName = other.nickName;
		phoneNumber = other.phoneNumber;
		darkestSecret = other.darkestSecret;
	}
	return *this;
}

					Contact::~Contact() {}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

const std::string	Contact::getFirstName() const {

	return (this->firstName);
}

const std::string	Contact::getLastName() const {

	return (this->lastName);
}

const std::string	Contact::getNickName() const {

	return (this->nickName);
}

const std::string	Contact::getPhoneNumber() const {

	return (this->phoneNumber);
}

const std::string	Contact::getDarkestSecret() const {

	return (this->darkestSecret);
}

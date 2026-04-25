/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:13:45 by sscheini          #+#    #+#             */
/*   Updated: 2026/03/16 17:11:24 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::string		stringMSG = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringMSG;
	std::string&	stringREF = stringMSG;
	
	std::cout << "MemAdd of stringMSG: " << &stringMSG << "\n";
	std::cout << "MemAdd held by stringPTR: " << stringPTR << "\n";
	std::cout << "MemAdd held by stringREF: " << &stringREF << "\n";
	std::cout << "Value of stringMSG: " << stringMSG << "\n";
	std::cout << "Value pointed by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value pointed by stringREF: " << stringREF << "\n";

	return (0);
}
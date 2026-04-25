/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:15:22 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/25 20:38:03 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

Harl::Harl() {
}

Harl::Harl(const Harl& other) {
	(void)other;
}

Harl& Harl::operator=(const Harl& other) {
	if (this != &other) {
	}
	return *this;
}

Harl::~Harl() {
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PRIVATE---------------------------------*/
/*--------------------------------------------------------------------------*/

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
				 " I really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money."
				 " You didn't put enough bacon in my burger!" 
				 " If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free."
				 " I've been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable!" 
				 " I want to speak to the manager now.\n" << std::endl;
}

/*--------------------------------------------------------------------------*/
/*------------------------------------END-----------------------------------*/
/*--------------------------------------------------------------------------*/
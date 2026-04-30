/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 20:31:59 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:54:19 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/*--------------------------------------------------------------------------*/
/*------------------------STATIC MEMBER INITIALIZATION----------------------*/
/*--------------------------------------------------------------------------*/

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;

/*--------------------------------------------------------------------------*/
/*--------------------------ORTHODOX CANONICAL FORM-------------------------*/
/*--------------------------------------------------------------------------*/

		Account::Account() {
}

		Account::Account(int initial_deposit) {

	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_totalNbDeposits += this->_nbDeposits;
	_totalNbWithdrawals += this->_nbWithdrawals;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created\n";
}

		Account::~Account() {
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PRIVATE---------------------------------*/
/*--------------------------------------------------------------------------*/

void	Account::_displayTimestamp( void ) {

	std::time_t now = std::time(0);
	std::tm*	tm = std::localtime(&now);
	char		timestamp[20];

	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", tm);
	std::cout << timestamp;
}

/*--------------------------------------------------------------------------*/
/*----------------------------------PUBLIC----------------------------------*/
/*--------------------------------------------------------------------------*/

int		Account::getNbAccounts( void ) {

	return (_nbAccounts);
}

int		Account::getTotalAmount( void ) {

	return (_totalAmount);
}

int		Account::getNbDeposits( void ) {

	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {

	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

int		Account::checkAmount( void ) const {

	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::makeDeposit( int deposit ) {
	
	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << "\n";
}
	
bool	Account::makeWithdrawal( int withdrawal ) {
	
	std::string	ans;
	int			p_amount;

	p_amount = this->_amount;
	if (withdrawal <= checkAmount())
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
		return (true);
	}
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused\n";
	return (false);
}

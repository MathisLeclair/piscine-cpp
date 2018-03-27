/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleclair <mleclair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:42:44 by mleclair          #+#    #+#             */
/*   Updated: 2018/03/26 13:03:58 by mleclair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts += 1;
    this->_accountIndex = _nbAccounts - 1;
    _displayTimestamp();
    std::cout << "index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;

}

Account::~Account(){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    _nbAccounts -= 1;
    _totalAmount -= this->_amount;
}

int	    Account::getNbAccounts( void ){
    return _nbAccounts;
}
int	    Account::getTotalAmount( void ){
    return Account::_totalAmount;
}
int	    Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}
int	    Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "account:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalNbDeposits += 1;
    Account::_totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amoun:t" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount = this->_amount;

    if (this->_amount > withdrawal){
        this->_nbWithdrawals += 1;
        _amount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        Account::_totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal <<";amount:" << this->_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }else{
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return(false);
    }
}
int		Account::checkAmount( void ) const{
    return (_amount);
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << _nbDeposits << ";withdrawals:" <<_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
    char buffer[42];
    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer,100,"[%Y%m%d_%H%M%S] ",timeinfo);
    std::cout << buffer;

}

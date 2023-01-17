/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/16, 18:16                      |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <sys/time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _accountIndex(_nbAccounts),
										_nbDeposits(0), _nbWithdrawals(0){
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;

}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount \
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals\
			<< std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t	seconds	= std::time(0);
	timeval	time;

	gettimeofday(&time, 0);
	std::tm		*now = std::localtime(&seconds);
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon + 1 << now->tm_mday << \
			"_" << now->tm_hour << now->tm_min << time.tv_sec % 60 <<  "] ";
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" \
			<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit \
			<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" \
				<< _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		return true;
	}
}

int	Account::checkAmount() const {
	return 0;
}

int Account::getNbAccounts() {return _nbAccounts;}

int Account::getTotalAmount() {return _totalAmount;}

int Account::getNbDeposits() {return _totalNbDeposits;}

int Account::getNbWithdrawals() {return _totalNbWithdrawals;}

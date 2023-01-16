/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/16, 18:16                      |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _accountIndex(_nbAccounts){
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount \
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals\
			<< std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t	seconds	= std::time(0);
	std::tm		*now = std::localtime(&seconds);
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon + 1 << now->tm_mday << \
			"_" << now->tm_hour << now->tm_min << /*  */ "]";
}

void	Account::displayStatus() const {
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" \
			<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	std::cout << "p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit \
			<< ";nb_deposits:" << _nbDeposits;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	std::cout << "index:" << // unfinished...
	if (withdrawal > _amount) {
		std::cout <<
	}
}
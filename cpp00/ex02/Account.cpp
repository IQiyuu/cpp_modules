/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ Account.cpp    /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static void	printTime( void );

Account::Account( void )
{}

Account::Account( int initial_deposit):
_accountIndex(_nbAccounts++),_amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	printTime();
	std::cout << " index:"
	<< _accountIndex << ";amount:" << _amount << ";created:" << std::endl;
}

int Account::getNbAccounts( void ) { return (_nbAccounts); }
int Account::getTotalAmount( void ) { return (_totalAmount); }
int Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void ){
	printTime();
	std::cout << " accounts:"
	<< _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;

}

void	Account::displayStatus( void ) const{
	printTime();
	std::cout << " index:"
	<< _accountIndex << ";amount:" << _amount << ";deposist:" << _nbDeposits
	<< ";withdrawal:" << _nbWithdrawals << std::endl;

}

void	Account::makeDeposit( int deposit ) {
	_nbDeposits++;
		printTime();
	std::cout << " index:"
	<< _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (_amount - withdrawal > 0)
	{
		_nbWithdrawals++;
		printTime();
		std::cout << " index:"
		<< _accountIndex << ";p_amount:" << _amount << ";deposits:" << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
		return (1);
	}
	return (0);
}

int	Account::checkAmount( void ) const{
	return (_amount);
}

Account::~Account(){
	printTime();
	std::cout << " index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
}

void	printTime( void ) {
	char	buff[100];
	std::time_t time = std::time(nullptr);
	std::tm *tinfos = std::localtime(&time);
	std::strftime(buff, 100, "[%Y%m%d_%H%M%S]", tinfos);
	std::cout << buff;
}

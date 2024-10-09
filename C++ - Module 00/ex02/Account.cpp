#include "Account.hpp"

std::string get_time()
{
	time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    char output[20];

    strftime(output, 20, "[%Y%m%d_%I%M%S] ", &datetime);
    return (std::string(output));
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		std::cout << get_time() << "index:" << _accountIndex << ";" 
		<< "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";
		_nbDeposits++;
		_amount += deposit;
		_totalAmount += deposit;
		_totalNbDeposits++;
		std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal( int deposit )
{
	if (_amount >= deposit)
	{
		std::cout << get_time() << "index:" << _accountIndex << ";" 
	<< "p_amount:" << _amount << ";" << "withdrawal:" << deposit << ";";
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_amount -= deposit;
		_totalAmount -= deposit;
		std::cout << "amount:" << _amount << ";"  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << get_time() << "index:" << _accountIndex << ";" 
	<< "p_amount:" << _amount << ";" << "withdrawal:refused" << std::endl;
	return (false);
}

int	Account::checkAmount( void ) const
{
	return (_totalAmount);
}

void	Account::displayStatus( void ) const
{
	std::cout << get_time() << "index:" << _accountIndex << ";" 
	<< "amount:" << _amount << ";"   << "deposits:" << _nbDeposits << ";" << "withdrawals:"
	<< _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << clock();
}

void	Account::displayAccountsInfos(void)
{
	std::cout << get_time() << "accounts:" << _nbAccounts << ";" 
	<< "total:" << _totalAmount << ";"   << "deposits:" << _totalNbDeposits << ";" << "withdrawals:"
	<< _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	std::cout << get_time() << "index:" << _accountIndex << ";" 
	<< "amount:" << _amount << ";"   << "created" << std::endl;
}



Account::~Account( void )
{
	std::cout << get_time() << "index:" << _accountIndex << ";" 
	<< "amount:" << _amount << ";"   << "closed" << std::endl;
}
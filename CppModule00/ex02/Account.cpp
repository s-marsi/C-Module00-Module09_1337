#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" <<  _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:"  << _totalNbWithdrawals << std::endl;
}


Account::Account( void )
{
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";created" << std::endl;
    _nbAccounts++;
}


Account::Account( int initial_deposit )
{
    if (initial_deposit >= 0)
    {
        _accountIndex = _nbAccounts;
        _nbAccounts++;
        _amount = initial_deposit;
        _nbDeposits = 0;
        _nbWithdrawals = 0;
        _totalAmount += initial_deposit;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";created" << std::endl;
    }
    
}


Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    if (deposit > 0)
    {
        _nbDeposits++;
        _totalNbDeposits++;
        _amount += deposit;
        _totalAmount += deposit;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount - deposit << ";deposit:" << deposit << ";amount:"  << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    }
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > 0 && withdrawal <= _amount)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:"  << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount << ";withdrawal:" << "refused" << std::endl;
    return (false);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";deposits:" << _nbDeposits << ";withdrawals:"  << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t      timestamp = time(NULL);
    struct tm   *date = localtime(&timestamp);
    char        output[20];
    strftime(output, 20, "[%Y%m%d_%H%M%S] ", date);
    std::cout << output;
}

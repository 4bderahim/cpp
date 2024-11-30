#include <fstream>
#include <iostream>
#include "Account.hpp"
#include <ctime>

int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_nbAccounts= 0;

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::_totalAmount << ";" << "closed";
}

Account::Account(int initial_deposit)
{
    Account::_nbAccounts++;
    Account::_nbDeposits++;
    Account::_totalAmount += initial_deposit;
    Account::_nbWithdrawals = 0;
    Account::_accountIndex = _nbAccounts;
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::_totalAmount << ";" << "created";
}
int Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}
int Account::getTotalAmount()
{
    return (Account::_totalAmount);
}
int Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}


int Account::checkAmount() const
{
    return (Account::_totalAmount);
}

void Account::makeDeposit(int deposit)
{
    Account::_totalNbDeposits++;
}

void Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals;
}
void 	Account::_displayTimestamp()
{
    std::time_t now;
    now = time(0);
    tm *ltm =  localtime(&now);
    std::cout << "[" << 1900+ltm->tm_year << 1+ltm->tm_mon << ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "]";
}

void Account::displayAccountsInfos()
{
    std::time_t now;
    now = time(0);
    tm *ltm =  localtime(&now);
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals;

}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_totalNbWithdrawals--;
    return (true);
}

int main()
{   
    Account *acc;
    acc->makeDeposit(3);
    acc->displayAccountsInfos();
    return (0);
}
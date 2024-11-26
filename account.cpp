#include <fstream>
#include <iostream>
#include "Account.hpp"

int Account::checkAmount() const
{
    return (Account::_totalAmount);
}

void Account::makeDeposit(int deposit)
{
    Account::_totalNbDeposits++;
    std::cout << "deposit has been made successfuly!\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_totalNbWithdrawals--;
    return (true);
}

Account::Account(int initial_deposit)
{
    Account::_nbDeposits = 0;
}

int main()
{   
    Account acc;
    return (0);
}
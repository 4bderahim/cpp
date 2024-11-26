#include <fstream>
#include <iostream>
#include "Account.hpp"

int Account::checkAmount() const
{
    return (_totalAmount);
}

// void Account::makeDeposit(int deposit)
// {
//     _totalNbDeposits++;
//     std::cout << "deposit has been made successfuly!\n";
// }

// bool Account::makeWithdrawal(int withdrawal)
// {
//     _totalNbWithdrawals--;
//     return (true);
// }

// Account::Account(int initial_deposit)
// {
//     _nbDeposits = 0;
// }

int main()
{   
    Account acc;
    return (0);
}
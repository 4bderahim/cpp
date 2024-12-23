#include "Account.hpp"

int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_nbAccounts= 0;

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::_amount << ";" << "closed"  << std::endl;
}

Account::Account(int initial_deposit)
{
    Account::_nbAccounts++;
    Account::_nbDeposits = 0;
    Account::_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_nbWithdrawals = 0;
    Account::_accountIndex = _nbAccounts-1;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::_amount << ";" << "created" << std::endl;
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
    return (Account::_amount);
}

void Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
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
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    if (Account::_amount < withdrawal)
        {
            std::cout << " index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withrawal:refused"  << std::endl;
            return (false);
        }
    Account::_nbWithdrawals++;
    std::cout << " index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount-withdrawal << ";nb_withdrawals:" << Account::_nbWithdrawals  << std::endl; 
    Account::_amount -=  withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    return (true);
}

void Account::makeDeposit(int deposit)
{
    if (deposit < 1)
        return ;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";p_amount:" << Account::_amount-deposit << ";deposit:" << deposit << ";amount:" << Account::_amount << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

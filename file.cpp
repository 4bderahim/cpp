#include <fstream>
#include <iostream>


class Account 
{
    public:
    // static int	getNbAccounts( void )
    // {}
        
	void	makeDeposit(int deposit)
    {
            _totalNbDeposits++;
            std::cout << "deposit >>> " << _totalNbDeposits << "<<<<<<\n";
    }
	bool	makeWithdrawal(int withdrawal)
    {
        return _totalNbWithdrawals++;
    }
	int		checkAmount(void) const
    {
        return (_totalAmount);
    }
	void	displayStatus(void) const
    {
    }
    private:
        static int	_nbAccounts;
	    static int	_totalAmount;
	    static int	_totalNbDeposits;
	    static int	_totalNbWithdrawals;
	    static void	_displayTimestamp(void)
        {
            std::string str;
            int i;
            std::ifstream MyReadFile("19920104_091532.log");
            while (getline(MyReadFile, str))
            {
                i = 0;
                while (str[i])
                {
                    if (str[i] == ' ')
                        std::cout << "\n";
                    i++;
                }
            }
        }
        int				_accountIndex;
	    int				_amount;
	    int				_nbDeposits;
	    int				_nbWithdrawals;
        Account(int initial_deposit)
        {
            _totalAmount = 0;
        }
        ~Account(void);
};

int main()
{
    Account acc;
}
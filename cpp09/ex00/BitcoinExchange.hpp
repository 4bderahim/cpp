#include <iostream>


class BitcoinExchange

{
    private:
    
    //

    public:
        BitcoinExchange()
        {
            std::cout << "BitcoinExchange constructed " << std::endl;
        }
        ~BitcoinExchange()
        {
            std::cout << "BitcoinExchange destructed " << std::endl;
        }
        BitcoinExchange(const BitcoinExchange &btc)
        {
            *this    = btc;
        }


};
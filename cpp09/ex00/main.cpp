

#include <iostream>
#include <fstream>
// #include "BitcoinExchange.hpp"



int main(int argc , char **argv)
{
    if (argc != 2)
    {
        std::cout << "args error !" << std::endl;
        return (1);
    }
    std::ifstream f(argv[1]);
    if (!f.is_open())
    {
        std::cout << "error opening the file!" << std::endl;
        return(1);
    }
    std::string str;

    while (std::getline(f, str))    
        {
            // reading file >>> str..
        }
    f.close();
    
    
    return (1);
}
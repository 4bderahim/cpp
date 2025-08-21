#include <iostream>
#include <fstream>
// #include "BitcoinExchange.hpp"



int check_first_line(std::string str)
{

    if (str.find("|") == std::string::npos)
        return (0);
    if (str.find_first_not_of("date") != std::string::npos && str.find_first_not_of("value") != std::string::npos )
    
    {
        return (0);

    }
    return (2);
}

int main(int argc , char **argv)
{
    if (argc != 2)
    {
        std::cout << "args error !" << std::endl;
        return (1);
    }
    // std::cout << argv[1] << std::endl;
    std::ifstream f(argv[1]);
    if (!f.is_open())
    {
        std::cout << "error opening the file!" << std::endl;
        return(1);
    }
     std::string str;
     int i = 0;
    //  str <<  f.rdbuf();
    while (getline(f, str))    
        {
            std::cout << "|" << str<< "|" <<  std::endl;
            if (str.size() && str.find_first_not_of(" ") == std::string::npos)
        {
            i=1;
            continue;
        }
        if (i == 1)
        {
            if (!check_first_line(str))
            {
                std::cout << "file Error!!" << std::endl;
                return (1);
            }

        }
                }
    f.close();
    
    return (1);
}
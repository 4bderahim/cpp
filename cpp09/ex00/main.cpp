#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
// #include "BitcoinExchange.hpp"



int check_data(std::string str)
{

    // printf("\t\t\t####");
    std::string tmp = str;
    if (std::count(str.begin(), str.end(), '|') !=1)
        return (0);
    tmp = str.substr(0, str.find('|'));
    // printf("%s>", tmp.c_str());

    if (std::count(tmp.begin(), tmp.end(), '-') !=2)
        return (0);
    tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
    
    tmp.erase(std::remove(tmp.begin(), tmp.end(), '-'), tmp.end());
    printf("%s?", tmp.c_str());
    if (!std::atoi(tmp.c_str()))
        return (0);
    // tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
    // tmp.erase(std::remove(tmp.begin(), tmp.end(), '|'), tmp.end());
    // tmp.erase(std::remove(tmp.begin(), tmp.end(), '-'), tmp.end());
    return (1);
}

int check_first_line(std::string& str)
{
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    if (str != "date|value")
        {
            printf("[%s]", str.c_str());
            return 0;
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
            // std::cout << str << std::endl;
            if ((!i && str.size()) && str.find_first_not_of(" ") != std::string::npos)
            {
                i=1;
                // continue;
                
            }
            
            if (i ==1)
            {
                if (i == 1&& !check_first_line(str))
                {
                    std::cout << "file Error!!" << std::endl;
                    return (1);
                }
                else
                {
                    // std::cout << "d|" << str<< "|" <<  std::endl;
                    i = 99;
                    
                    continue;
                }
                i++;
                
            }
            if (!check_data(str))
                {}// printf("\t{######}]\n");
        }
    f.close();
    
    return (1);
}
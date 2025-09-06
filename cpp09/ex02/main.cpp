
#include <iostream>
#include <unistd.h>
#include <limits>
int valid(std::string str)
{
    if (str[0] == '+')
        {
            std::string ehhjg = "0987654321";
            if (ehhjg.find_first_of(str[1]) == std::string::npos)
                return(0);
            str.erase(0,1);
        }
    if (str.find_last_not_of("0987654312") != std::string::npos)
        return (0);
    if(std::atol(str.c_str()) > UINT32_MAX)
        return (0);
    return (1);// allgoood
}



int this_error(std::string str)
{


    std::cout << str << std::endl;
    return (1);

}



int main(int argc ,  char **argv)
{
    if (argc == 1 || argc == 2 )
    {
        std::cout << "args Error" << std::endl;
        return (1);
    }
    for (size_t i = 1; i < argc; i++)
    {
        if (!valid(argv[i]))
            return (this_error("args error"));
        std::cout << argv[i] << std::endl;
    }
    




    return (0);
}
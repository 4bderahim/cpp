#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter l;
    
    float ll = 356.3f;
    int j =ll;
    // std::cout << ">>|" << j << std::endl;
    // l.convert("-inffff");
    // l.convert("+inff");
    // l.convert("123");
    // l.convert("111111111111111112.3");
    // l.convert("12.35");
    std::cout  << ">>"   << std::atoi("   56464.2f") << std::endl;;
    std::cout << ">>"  << std::atof("s0") << std::endl;;
    l.convert("+inff");
}
#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter l;
    
    float ll = 356.3f;
    int j = ll;
    // std::cout << ">>|" << j << std::endl;
    // l.convert("-inffff");
    // l.convert("+inff");
    // l.convert("123");
    // l.convert("111111111111111112.3");
    l.convert("5000.35");

    // std::cout  << ">>" << std::atoi("+147483647") << std::endl;;
    // std::cout << ">>" << std::atof("+2147444444836471.1") << std::endl;;
    // l.convert("+");

}
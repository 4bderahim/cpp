#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter l;
    
    float ll = 356.3f;
    int j = ll;
    std::cout << "--------------------" << j << std::endl;
    l.convert("-inffff");
    std::cout << "--------------------" << j << std::endl;

    l.convert("nan");
    std::cout << "--------------------" << j << std::endl;
    l.convert("123");
    std::cout << "--------------------" << j << std::endl;
    l.convert("111111111111111112.3");
    std::cout << "--------------------" << j << std::endl;
    l.convert("-1111");
    // std::cout  << ">>" << std::atoi("147483647") << std::endl;;
    std::cout << ">>" << std::atof("448364.01") << std::endl;;
    // l.convert("+");
}

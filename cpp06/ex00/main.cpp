#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter l;
    
    l.convert("-infff");
    l.convert("+inff");
    l.convert("123");
    l.convert("111111111111111112.3f");
    l.convert("12.35");
    l.convert(".");
}
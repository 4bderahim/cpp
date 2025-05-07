#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter l;
    
    l.convert("123");
    l.convert("12.3ff");
    l.convert("12.35");
    l.convert(".");
}
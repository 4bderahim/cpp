#include "ScalarConverter.hpp"


int to_int(std::string s)
{
    int i = 0;
    while (s[i] == '+' || s[i] == '-')
    {
        i++;
    }
}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    std::string l;
    // l.find_first_not_of()
}

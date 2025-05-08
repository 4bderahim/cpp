#include "ScalarConverter.hpp"

int valid(std::string s, std::string s_)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s_.find(s[i]) == std::string::npos)
            return (0);
        i++;
    }
    return (1);
}

int ScalarConverter::who_am_i(std::string s)
{
    // 0 > -inff
    // 1 > +inff
    // 2 > char
    // 3 > int
    // 4 > double
    // 5 > float

    if (s == "-inff")
        return (0);
    if (s == "+inff")
        return (1);
    if (s.length() == 1)
        this->is_char = 1;
    if (valid(s, "0123456789+-"))
        this->is_int = 1;
    if (valid(s, "0123456789+-."))
        this->is_double = 1;
    if (valid(s, "0123456789+-.f"))
        this->is_float = 1;
    return (-1);
}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    std::cout <<  ">>>>> " << who_am_i(str) << std::endl;

}

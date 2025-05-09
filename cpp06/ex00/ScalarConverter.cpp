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


int count_(std::string str, char r)
{
    int c = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == r)
            c++;
    }
    return (c);
}
ScalarConverter::ScalarConverter()
{
    this->double_int_float = 0;
    this->is_char = 0;
}


// int check_str(std::string str)
// {
//     std::count()


// }

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
    this->double_int_float = (valid(s, "0123456789+-") || valid(s, "0123456789+-.") || valid(s, "0123456789+-.f"));
    if (this->double_int_float)
    {
        if (count_(s, '-') > 0 && count_(s, '+') > 0 )
            return (-1);
        if (count_(s, '.') > 1 || count_(s, '-') > 1 || count_(s, 'f') > 1 || count_(s, '+') > 1)
            return -1;
        if ((s.find("f") != std::string::npos && s.find("f") != s.length()-1) || (s.find("-") != std::string::npos && s.find("-") != 0) || (s.find("+") != std::string::npos && s.find("+") != 0) || (s.find(".") != std::string::npos && (s.find(".") == 0 || s.find(".") == s.length()-1)))
            return -1;
    }
    return (1);
}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    // std::cout <<  ">>>>> " << who_am_i(str) << std::endl;
}

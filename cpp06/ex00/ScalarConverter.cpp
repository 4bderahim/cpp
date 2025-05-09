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

    if (s.find_last_not_of("1234657890") == std::string::npos)
        return (-1);
    if (s.length() == 1)
        this->is_char = 1;
    if (s.find(' ') != std::string::npos &&s.find(' ') != 0 )
        return (-1);
    else
    {
        int i = 0;
        while (s[i] == ' ')
            i++
            ;
        while (i != -1)
        {
            s.erase(i);
            i--;
        }
        while (s.find(" ")!= std::string::npos)
            return (-1);
    }
    this->double_int_float = (valid(s, "0123456789+-") || valid(s, "0123456789+-.") || valid(s, "0123456789+-.f"));
    if (this->double_int_float)
    {
        if (count_(s, '-') > 0 && count_(s, '+') > 0)
            return (-1);
        if (count_(s, '.') > 1 || count_(s, '-') > 1 || count_(s, 'f') > 1 || count_(s, '+') > 1)
            return -1;
        if ((s.find("f") != std::string::npos && s.find("f") != s.length()-1) || (s.find("-") != std::string::npos && s.find("-") != 0) || (s.find("+") != std::string::npos && s.find("+") != 0) || (s.find(".") != std::string::npos && (s.find(".") == 0 || s.find(".") == s.length()-1)))
            return -1;
        return (1);
    }
    if (s == "-inff")
        return (1);
    if (s == "+inff")
        return (1);

    return (-1);
}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    ScalarConverter k;
    std::cout <<  ">>>>> " << k.who_am_i(str) << std::endl;
}

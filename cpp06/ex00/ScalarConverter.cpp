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
    this->is_char = 1;
    this->is_int = 1;
    this->is_double_float = 0;
}

int ScalarConverter::who_am_i(std::string *str)
{
    std::string s = *str; 
    if (s == "-inff")
        return (1);
    if (s == "+inff")
        return (1);
    if (s.find_first_not_of(" 1234657890.f+-") != std::string::npos)
        return (-1);
    if (s.length() == 1)
        this->is_char = 1;
    int i = 0;
    while (s[i] == ' ')
        i++
        ;
    i--;
    while (i != -1)
    {
        s.erase(i, 1);
        i--;
    }
    if (s[s.length()-1] == ' ')
    {
        i = s.length()-1;
        while (i >= 0 && s[i] == ' ')
                i--
                ;
        i++;
        s.erase(i,s.length()-i);
    }
    if (s.find(" ")!= std::string::npos)
        return (-1);
    this->is_double_float = (valid(s, "0123456789+-") || valid(s, "0123456789+-.") || valid(s, "0123456789+-.f"));
    if (this->is_double_float)
    {
        if (count_(s, '-') > 0 && count_(s, '+') > 0)
            return (-1);
        if (count_(s, '.') > 1 || count_(s, '-') > 1 || count_(s, 'f') > 1 || count_(s, '+') > 1)
            return -1;
        if ((s.find("f") != std::string::npos && s.find("f") != s.length()-1) || (s.find("-") != std::string::npos && s.find("-") != 0) || (s.find("+") != std::string::npos && s.find("+") != 0) || (s.find(".") != std::string::npos && (s.find(".") == 0 || s.find(".") == s.length()-1)))
            return -1;
        this->_float = std::atof(s.c_str());
        this->_double = this->_float;
        this->_int = std::atoi(s.c_str());
        if (this->_int > 255 || (this->_int >= 0 && this->_int <= 31) || this->_int == 127)
            this->is_char = 0;
        if (std::atol(s.c_str()) > INT_MAX)
            this->is_int = 0;
        *str = s;
        return (1);
    }
    this->is_int = 0;
    this->is_char = 0;
    *str = s;
    return (-1);
}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    ScalarConverter k;
    if (k.who_am_i(&str) == -1)
    {
        std::cout << "CHAR : IMPOSSIBLE" << std::endl;
    }
    std::cout <<  ">>>>> " << k.who_am_i(&str) << std::endl;
    // if ()
    // {
    // }

}

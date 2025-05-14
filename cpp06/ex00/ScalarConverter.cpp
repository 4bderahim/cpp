#include "ScalarConverter.hpp"

int valid(std::string s, std::string s_)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s_.find(s[i]) == std::string::npos)
            return (0);
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
    this->is_a_char_no_num = 0;
    this->nob = 0;
}

int ScalarConverter::who_am_i(std::string *str)
{
    std::string s = *str;
    if (s == "-inff")
        return (1);
    if (s == "+inff")
        return (1);
    if (s.find_first_not_of(" 1234657890.f+-") != std::string::npos && s.length() > 1)
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
    if (!valid(s, "0123456789") && s.length() == 1)
        {
            this->is_int = 0;
            return -1;
        }
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
        if (std::atol(s.c_str()) > INT_MAX)
            this->is_int = 0;
        if (this->is_int && ((this->_int >= 0 && this->_int <= 31) || this->_int == 127 || this->_int > 255 || this->_int < -255))
            this->is_char = 0;
        if (!this->is_int)
        {
            if (s.length() > 1)
                this->is_char = 0;
        }
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
    ScalarConverter k;
    if (str == "-inff" || str == "+inff" || str == "-INFF" || str == "+INFF" || str == "nan" || str == "NAN")
        k.nob = 1;
    if (k.who_am_i(&str) == -1)
        k.nob =1;
    // else
    if (k.nob)
    {
        k.is_char = 0;
        k.is_int = 0;
        std::cout << "CHAR : " << "IMPOSSIBLE" << std::endl;
        std::cout << "INT : " << "IMPOSSIBLE" << std::endl;
        std::cout << "FLOAT : " << ( (str == "nan") ? "nanf" : "IMPOSSIBLE") << std::endl;
        std::cout << "DOUBLE : " << ( (str == "nan") ? "nan" : "IMPOSSIBLE") << std::endl;
        return ;
    }
    if (k.is_char)
        {
            if (!k.is_int && str.length() == 1)
                k._char = str[0];
            else
                k._char = atoi(str.c_str());
            std::cout << "CHAR : " << k._char << std::endl;
        }
    else
        std::cout << "CHAR : " << "IMPOSSIBLE" << std::endl;
    if (k.is_int)
    {
        k._int = std::atoi(str.c_str());
        std::cout << "INT : " << k._int << std::endl;
    }
    else
        std::cout << "INT : " << "IMPOSSIBLE" << std::endl;
    if (k.is_double_float)
    {
        k._float = std::atof(str.c_str());
        k._double = std::atof(str.c_str());
        std::cout << "FLOAT : " << k._float << "f" << std::endl;
        std::cout << "DOUBLE : " << k._double << std::endl;
    }
    else
    {
        std::cout << "FLOAT : " << "IMPOSSIBLE" << std::endl;
        std::cout << "DOUBLE : " << "IMPOSSIBLE" << std::endl;
    }
}

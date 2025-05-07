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

int who_am_i(std::string s)
{
    // 0 > -inff
    // 1 > +inff
    // 2 > char 
    // 3 > int 
    // 4 > float
    // 5 > double
    int i;
    i = 0;
    if (s == "-inff")
        return i;
    i++;
    if (s == "+inff")
        return i;
    i++;
    if (s.length() == 1)
        return i;
    i++;
    if (s.find_last_not_of("01234564789-+") == std::string::npos)
        return (i);
    i++;
    if (s.find_first_not_of("01234564789-+.f") == std::string::npos)
        return (i);
    i++;
    if (s.find_first_not_of("01234564789-+.") == std::string::npos)
        return (i);
    return (i);

}

void ScalarConverter::convert(std::string str)
{
    int to_int;
    float to_float;
    double to_double;
    std::string l;

    // l.find_first_not_of()
}

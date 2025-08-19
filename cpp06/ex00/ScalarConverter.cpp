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

// ScalarConverter::~ScalarConverter()
// {
//     std::cout << "ScalarConverter destructed!" << std::endl;
// }

// ScalarConverter::ScalarConverter(const ScalarConverter &sc)
// {
//     *this = sc;
// }

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &sc)
// {
//     //
//     (void)sc;
//     return (*this);
// }

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constructed!" << std::endl;
}

void for_fun_myxxx(std::string s)
{
    std::cout << "CHAR : " << s << std::endl;
    std::cout << "INT : " << s << std::endl;
    std::cout << "FLOAT : " << s << "f" << std::endl;
    std::cout << "DOUBLE : " << s << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    if (str == "-inf" || str == "+inf" || str == "-INF" || str == "+INF" || str == "-inff" || str == "+inff" || str == "-INFF" || str == "+INFF")
        {
            for_fun_myxxx(str);
            return ;
        }
    int _int;
    float _float;
    double _double;
    char _char;

    int is_char = 1;
    int is_int = 1; 
    int is_double_float = 0;
    bool floating_point = 0;
    
    
    int nob = 0;

    bool none_displayable;
    

    if (str == "")
        nob =1;
    std::string s = str;
    if (s.find_first_not_of(" 1234657890.f+-") != std::string::npos && s.length() > 1)
        nob = 1;
    if (s.length() == 1)
        is_char = 1;
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
        nob = 1;
    if (!valid(s, "0123456789") && s.length() == 1)
        {
            is_int = 0;
        }
    is_double_float = (valid(s, "0123456789+-") || valid(s, "0123456789+-.") || valid(s, "0123456789+-.f"));
    if ((s =="-") ||(s =="+") || (s =="f"))
        is_double_float = 0;
    if ((s.length() > 19 && s.find(".") == std::string::npos) || (s.find(".") > 19 && s.find(".") != std::string::npos))
        nob = 1;
    if (s.find(".") != std::string::npos)
    {
        floating_point = 1;
    }
    if (is_double_float)
    {
        if (count_(s, '-') > 0 && count_(s, '+') > 0)
            nob = 1;
        if (count_(s, '.') > 1 || count_(s, '-') > 1 || count_(s, 'f') > 1 || count_(s, '+') > 1)
            nob = 1;
        if ((s.find("f") != std::string::npos && s.find("f") != s.length()-1) || (s.find("-") != std::string::npos && s.find("-") != 0) || (s.find("+") != std::string::npos && s.find("+") != 0) || (s.find(".") != std::string::npos && (s.find(".") == 0 || s.find(".") == s.length()-1)))
            nob = 1;
        _float = std::atof(s.c_str());
        _double = _float;
        _int = std::atoi(s.c_str());
        if (std::atol(s.c_str()) > INT_MAX)
            {
                is_char = 0;
                is_int = 0;
            }
        if ((_int > 127  || _int < -128))
        {
            is_char = 0;
            }
        if (is_char && ((_int >= 0 && _int <= 31) || _int == 127 || _int < 0 ) )
        {
                none_displayable = 1;
        }
        str = s;
    }
    else
    {
        is_int = 0;
        if (str.length() != 1)
            is_char = 0;
        str = s;
    }
    if (str == "nan" || str == "NAN" || str == "nanf" || str == "NANF"  )
    {
        is_char = 0;
        is_int = 0;
        std::cout << "CHAR : " << "IMPOSSIBLE" << std::endl;
        std::cout << "INT : " << "IMPOSSIBLE" << std::endl;
        std::cout << "FLOAT : " << "nanf" << std::endl;
        std::cout << "DOUBLE : " << "nan"  << std::endl;
        return ;
    }
    if (is_char && !nob && !floating_point && !none_displayable)
        {
            if (str.length() == 1 && str.find_first_of("0123456789") == std::string::npos)
                    _char =  str[0];
            else
                _char = static_cast<float>(atoi(str.c_str()));
            std::cout << "CHAR : " << _char << std::endl;
        }
    else
        std::cout << "CHAR : " << (!none_displayable ? "IMPOSSIBLE" : "Non displayable") << std::endl;
    
    if (is_double_float && !nob)
    {
        char *c;
        _float = static_cast<float>(std::atof(str.c_str()));
        _double = static_cast<double>(std::strtod(str.c_str(), &c));
        std::cout << "FLOAT : " << _float<< ((floating_point) ? "" : ".00") << "f" << std::endl;
        std::cout << "DOUBLE : " << _double << ((floating_point) ? "" : ".00") << std::endl;
    }
    else
    {
        std::cout << "FLOAT : " << "IMPOSSIBLE" << std::endl;
        std::cout << "DOUBLE : " << "IMPOSSIBLE" << std::endl;
    }
    if (is_int && !nob)
    {
        _int = static_cast<float>(_float);
        std::cout << "INT : " << _int << std::endl;
    }
    else
        std::cout << "INT : " << "IMPOSSIBLE" << std::endl;
}

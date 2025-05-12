
#include <limits>
#pragma once
#include <iostream>

class ScalarConverter
{
    private:
        int _int;
        float _float;
        double _double;
        char _char;
        //
        int is_char;
        int is_int; 
        int is_double_float;
        
    public:
        ScalarConverter();
        static void convert(std::string str);
        int who_am_i(std::string *s);
};

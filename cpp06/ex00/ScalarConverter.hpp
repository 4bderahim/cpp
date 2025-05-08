

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
        int is_int;
        int  is_float;
        int  is_double;
        int  is_char;
        
    public:
        static void convert(std::string str);
        int who_am_i(std::string s);
};


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

        int is_char;
        int is_int; 
        int is_double_float;
        int nob;


        bool floating_point;
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &sc);
        ScalarConverter &operator=(const ScalarConverter &sc);
        static void convert(std::string str, ScalarConverter &k);
        int who_am_i(std::string *s);
};


#pragma once
#include <limits>
#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        //
    public:
        // ~ScalarConverter();
        // ScalarConverter(const ScalarConverter &sc);
        // ScalarConverter &operator=(const ScalarConverter &sc);
        static void convert(std::string str);
};

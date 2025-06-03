
#pragma once
#include <climits>
#include <iostream>
#include <cstdlib>
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

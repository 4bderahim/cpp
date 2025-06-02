#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    if (argc == 2)
    {
            ScalarConverter::convert(argv[1]);
            return (0);
    }
    std::cout << "args error !!!!!!!!" << std::endl;
    return (1);
}

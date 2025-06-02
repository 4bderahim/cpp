#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    // int o = -0;
    if (argc == 2)
    {
            ScalarConverter::convert(argv[1]);
            return (0);
    }
    std::cout << "args error !!!!!!!!" << std::endl;
    return (1);
}

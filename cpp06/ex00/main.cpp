#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    ScalarConverter l;
    if (argc == 2)
    {
            l.convert(argv[1]);
            return (0);
    }
    std::cout << "args  error !!!!!!!!" << std::endl;
    return (1);
}

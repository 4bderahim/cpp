#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    ScalarConverter l;
    (void)argc;
    (void)argv;
    if (argc < 2 || argc > 2)
        {
            std::cout << "args  error !!!!!!!!" << std::endl;
            return (1);
        }
    
    // float ll = 356.3f;
    // int j = ll;
    // std::cout << "--------------------" << j << std::endl;
    // std::cout <<  "\t\t||" << argv[1] << std::endl;
    // l.convert(argv[1]);
    // std::cout << "--------------------" << j << std::endl;

    l.convert(argv[1]);
    // std::cout << "--------------------" << j << std::endl;
    // l.convert("123");
    // std::cout << "--------------------" << j << std::endl;
    // l.convert("111111111111111112.3");
    // std::cout << "--------------------" << j << std::endl;
    // l.convert("-1111");
    // std::cout  << ">>" << std::atoi("147483647") << std::endl;;
    // std::cout << ">>" << std::atof("448364.01") << std::endl;;
}

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{

    try
    {
        
     double x = std::stod("9223372036854700000000000000700000058000008000");
        std::cout << x; 
    }
    catch(const std::out_of_range& e)
    {
                 std::cerr << "Out of range: " << e.what() << std::endl;;
    }
    if (argc == 2)
    {
            ScalarConverter l;
            l.convert(argv[1], l);
            return (0);
    }
    std::cout << "args  error !!!!!!!!" << std::endl;
    return (1);
}

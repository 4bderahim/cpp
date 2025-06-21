#include "Array.hpp"

int main()
{
    Array<int> k(5);
    k.set();
    std::cout << k[3] << std::endl;
    try
    {
        std::cout << k[9] << std::endl;
    }
    catch(const std::exception& ee)
    {
        std::cout << ee.what() << '\n';
    }
}
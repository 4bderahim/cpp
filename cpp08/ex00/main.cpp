
#include "easyfind.hpp"

#include <vector>
// #include <list>

int main()
{
    std::vector<int> f;
    // f.reserve(3);
    f.push_back(15);
    f.push_back(115);
    f.push_back(151);
    f.push_back(511);

    std::cout << easyfind(f, 15) << std::endl;
    try
    {
        std::cout << easyfind(f, 1531);
    }
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // std::cout << f[0];
}
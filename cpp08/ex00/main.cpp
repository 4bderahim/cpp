#include "easyfind.hpp"

#include <vector>

int main()
{
    std::vector<int> f;
    f.reserve(3);
    f.push_back(15);
    f.push_back(115);
    f.push_back(151);
    f.push_back(511);
    std::cout << ">>" << easyfind(f, 151);
}
#include "iter.hpp"

void func(int j)
{
    std::cout << j << std::endl;
}

int main()
{
    int d[] = {1, 5 ,8, 6};
    // std::cout << sizeof(d) << std::endl;
    iter_(d, sizeof(d)/sizeof(int), func);
}
#include "iter.hpp"

void o(int j)
{
    std::cout << j ;

}
int main()
{
    int d[] = {1, 5 ,8, 6};
    iter_(d, sizeof(d)/sizeof(int), &o);
}
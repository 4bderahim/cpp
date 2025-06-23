#include "Array.hpp"



// class L
// {
//     private:
//         int u;
//     public:
//         L(int t):u(t){}
//         int get()const {return this->u;}
// };
// std::ostream &operator<<(std::ostream &o, const L &l)
// {
//     std::cout << l.get();
//     return (o);
// }

int main()
{
    // Array<L> k(5);
    // k[0]  = L(454545);
    Array<int> k(5);
    k[1]  = 145;
    k[2]  = 11001;
    k[3]  = 11010;
    k[4]  = 11011;
    std::cout << k[0] << std::endl;
    try
    {
        std::cout << k[9] << std::endl;
    }
    catch(const std::exception& ee)
    {
        std::cout << ee.what() << '\n';
    }
}
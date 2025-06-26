#include "iter.hpp"

// class S
// {
//     public:
//         S():n(42){}
//         int get()const {return this->n;}
//     private:
//         int n;
// };

// std::ostream &operator<<(std::ostream &o, const S &s)
// {
//     o << s.get();
//     return (o);
// }

// template<typename T>
// void pp(T const &x)
// {
//     std::cout << x << std::endl;
//     return ;
// }


template <typename U> 
void func(U j)
{
    std::cout << j << std::endl;
}

int main()
{
    int d[] = {1, 2 ,3, 5};
    // S tab[4];
    // std::cout << sizeof(d) << std::endl;
    iter(d, 4, func);
}
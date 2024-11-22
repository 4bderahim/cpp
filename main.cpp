#include <iostream>
//Zz   man
struct Pop
{
    int x;

    void hello()
    {
        std::cout << x;
    }
};

void kk(Pop hello)
{
    std::cout << "from func>" << hello.x;
}

template <typename D>
D hello(D x, D v)
{
    std::cout << x << v ;
    return (x);
}
class Any
{
    public:
    int t;
    public:
    void pr() const
    {
        t = 11;
        std::cout << "";
    }  
};
int main(int argc, char **argv)
{
    Pop none;
    Any def;

    def.t = 90;
    def.pr();
    none.x = 9;
    none.hello();
    none.x = 0;
    none.hello();
    std::cout << "\n\n";
    none.x = 111;

    kk(none);

    return (0);
}
#include "Span.hpp"

#include <vector>

int main()
{


    std::vector<int> v;

    v.push_back(411);
    v.push_back(401);



    Span sp = Span(3);
    sp.addNumber(6);
    sp.addNumber(60);
    sp.addNumber(3);
    try
    {
        sp.addNumber(30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::vector<int>::iterator t;
    std::vector<int>::iterator tt;
    t = v.begin(); 
    tt = v.end();
    try
    {
        sp.addSeqNumbers(v.begin(), v.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
#include "Span.hpp"

#include <vector>

int main()
{


std::vector<int> v;

v.push_back(411);
v.push_back(401);
v.push_back(4051);
v.push_back(4051);
v.push_back(40501);
Span sp = Span(9);
sp.addNumber(6);
sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(900);
// sp.addNumber(90);
// sp.addNumber(900000000);
// sp.addNumber(9000);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::vector<int>::iterator t;
std::vector<int>::iterator tt;
t = v.begin(); 
tt = v.end();
sp.addSeqNumbers(v.begin(), v.end());
return 0;
}
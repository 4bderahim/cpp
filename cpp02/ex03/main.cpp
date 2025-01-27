#include "Point.hpp"
#include <iostream>

int main( void ) 
{

//_________________OUTSIDE________________________________
//           B(10,30)
//             / \
//            /   \
//           /     \
//          /   P   \    P' <-----  P(30, 15)
//         /         \
//    A(0,0) ----------- C(20,0)


    Point a(30, 30);
    Point b(0,  0);
    Point c(20, 0);
    Point d(10, 15);
    if (bsp(a,b,c,d))
        std::cout << "\t\t\t\t\t>>P is inside\n";
    else
        std::cout << "\t\t\t\t\t>>P is outside\n";

//_________________________________________________


//_________________INSIDE______________________________
//           B(10,30)
//             / \
//            /   \
//           /     \
//          /   P2' \    <-----  P2(10, 15)
//         /         \
//    A(0,0) ----------- C(20,0)


    Point a1(10, 30);
    Point b1(0,  0);
    Point c1(20, 0);
    Point d1(10, 15);
    if (bsp(a1,b1,c1,d1))
        std::cout << "\t\t\t\t\t>>P1 is inside\n";
    else
        std::cout << "\t\t\t\t\t>>P1 is outside\n";

//_________________________________________________

    return 0;
}
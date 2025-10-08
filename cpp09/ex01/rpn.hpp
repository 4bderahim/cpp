



#pragma once
#include <iostream>
#include <stack>
#include <algorithm>



class rpn
{

    private:
        //
    public:
        rpn()
        {
            // std::cout << "rpn Constructed !" << std::endl ;

        }
        ~rpn()
        {
            // std::cout << "rpn destructed !" << std::endl ;

        }
        rpn(const rpn &r)
        {
            *this = r;

        }
        const rpn &operator=(const rpn &r )
        {
            (void) r;
            return *this;
        }
        int op(int f, int s ,char o)
        {
            if (o == '+')
                return (f+s);
            if (o == '-')
                return (f-s);
            if (o == '*')
                return (f*s);
            return (f/s);
        }

        void rpnn( std::stack<int> lifo, std::string str)
        {
            std::stack<int> lifo;
            std::string nums = "0987654321";

            for (size_t i = 0; i < str.size()  ; i++)
            {
                if ( nums.find_first_of(str[i]) != std::string::npos)
                    lifo.push()
                
                    
            }
            
            





            int top, top2;

            while (lifo.size()!=1)
            {
                top = lifo.top();
                lifo.pop();
                top2 = lifo.top();
                lifo.pop();
                lifo.push(op(top, top2, str[0]));
                str.erase(0,1);
            }
            std::cout << lifo.top()  << std::endl;
        }

        


};
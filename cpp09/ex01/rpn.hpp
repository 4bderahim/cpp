



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

        void rpnn(std::string str)
        {
            std::stack<int> lifo;
            std::string nums = "0987654321";

            for (size_t i = 0; i < str.size()  ; i++)
            {
                if (str[i] == ' ')
                    continue;
                if ( nums.find_first_of(str[i]) != std::string::npos)
                    {
                        lifo.push(std::atoi(str.substr(i, 1).c_str()));
                    }
                else
                {
                    if (lifo.size() == 1)
                    {
                        std::cout << "INERFIX  OPERATION" << std::endl;
                        exit(1);
                    }
                    int poped_first = lifo.top();
                    lifo.pop();
                    int poped_sec = lifo.top();
                    lifo.pop();
                    lifo.push(op(poped_sec, poped_first, str[i]));
                }
            }
            std::cout << lifo.top() << std::endl;

        }

};
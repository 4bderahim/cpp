


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
            std::cout << "rpn Constructed !" << std::endl ;

        }
        ~rpn()
        {
            std::cout << "rpn destructed !" << std::endl ;

        }
        rpn(const rpn &r)
        {
            *this = r;

        }
        const rpn &operator=(const rpn &r )
        {
            //
            return *this;
        }
        void rpnn( std::stack<int> lifo, std::string str)
        {
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
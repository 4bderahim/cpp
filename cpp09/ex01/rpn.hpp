


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
        
        


};
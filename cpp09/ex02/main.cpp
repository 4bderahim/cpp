
#include "PmergeMe.hpp"
int valid(std::string str)
{
    if (str[0] == '+')
        {
            std::string n = "0987654321";
            if (n.find_first_of(str[1]) == std::string::npos)
                return(0);
            str.erase(0,1);
        }
    size_t that_first_not_of_space=  str.find_first_not_of(' ');
    str = str.substr(that_first_not_of_space, str.find_last_of("0987654321")-that_first_not_of_space+1);
    // std::cout << str << "<<<<?<<<" << std::endl;
    if (str.find_last_not_of("0987654312") != std::string::npos)
        return (0);
    if(std::atol(str.c_str()) > UINT32_MAX)
        return (0);
    return (1);// allgoood
}



int this_error(std::string str)
{
    
    std::cout << str << std::endl;
    return (1);

}


int main(int argc , char **argv)
{
    if (argc == 1 || argc == 2 )
    return (this_error("args error"));
    for (int i = 1; i < argc; i++)
    {
        if (!valid(argv[i]))
        return (this_error("args error"));
    }
    #include <unistd.h>


// ael-krid@c1r8p8 ex02 % ./PmergeMe 2 3 4  9 2 3  4 89  2 3 43 eooe

    mergeme m;
    std::vector<unsigned int> vecc;
    std::deque<unsigned int> deqq;
    std::vector<std::pair<unsigned int, unsigned int> > vec_pair;
    std::deque<std::pair<unsigned int, unsigned int> > deque_pair;

    // m.fill_container(vvecc);
    int i = 1;
    while (i < argc)
    {
        //  int d = std::atol(argv[i]);
        // printf("%u|%s<", d, argv[i]);
        vecc.push_back(std::atol(argv[i]));
        deqq.push_back(std::atol(argv[i]));
        i++;
    }
    m.generateJacobstahl(50);

    // size_t ii = 0;
    // while ( ii < m.get_seq().size())
    // {
    // write(1, "213123123", 11);

    //     if (m.get_seq()[ii] > vecc.size())
    //     // m.seq_limit
    //     ii++;
    // }
    clock_t start = clock();
    vecc = m.Mr_fordJohnson(vecc ,vec_pair);
    clock_t end = clock();
    // for (size_t i = 0; i < vecc.size(); i++)
    // {
    //     std::cout << vecc[i] << std::endl;
    // }
    double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
    std::cout << "Time to process a range of " << argc<< " elements with std::vector  "
              << elapsed << " us" << std::endl;    
    // deqq = m.Mr_fordJohnson(deqq);

     start = clock();
    deqq = m.Mr_fordJohnson(deqq, deque_pair);
     end = clock();

    // for (size_t i = 0; i < vecc.size(); i++)
    // {
    //     std::cout << vecc[i] << std::endl;
    // }
      elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
    std::cout << "Time to process a range of  " << argc<< " elements with std::deque  "
              << elapsed << " us" << std::endl;
    
    return (0);
}
#include "PmergeMe.hpp"

int valid(std::string str)
{
    if (str.find_first_not_of("0987654321+") != std::string::npos)
        return (0);
    if (str[0] == '+')
        {
            std::string n = "0987654321";
            if (n.find_first_of(str[1]) == std::string::npos)
                return(0);
            str.erase(0,1);
    }

    size_t that_first_not_of_space=  str.find_first_not_of(' ');
    str = str.substr(that_first_not_of_space, str.find_last_of("0987654321")-that_first_not_of_space+1);
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


    mergeme m;
    std::vector<unsigned int> vecc;
    std::deque<unsigned int> deqq;

    int i = 1;
    while (i < argc)
    {
        vecc.push_back(std::atol(argv[i]));
        deqq.push_back(std::atol(argv[i]));
        i++;
    }
    
    m.generateJacobstahl(17);
    
    std::cout << "befor:" ;
    size_t x = 5;
    if (x > vecc.size())
        x = vecc.size();
    for (size_t j = 0; j < x; j++)
    {
        std::cout << " " << vecc[j];
    }
    if (vecc.size() > 5)
        std::cout << " [...]";
    std::cout << "\n" ;
     clock_t start = clock();
    vecc = m.Mr_fordJohnson(vecc);
    clock_t end = clock();
    std::cout << "after : " ;
    x = 5;
    if (x > vecc.size())
        x = vecc.size();
    for (size_t j = 0; j < x; j++)
    {
        std::cout << " " << vecc[j];
    }
    if (vecc.size() > 5)
        std::cout << " [...]" << std::endl;
    std::cout << "\n";
    
    double elapsed = static_cast<double>(end - start) * 1000.0  / CLOCKS_PER_SEC ;
    std::cout << "Time to process a range of " << argc<< " elements with std::vector  "
              << elapsed << " ms" << std::endl;    

    std::cout << "\n" << std::endl;
    

    std::cout << "befor :" ;

    x = 5;
    if (x > deqq.size())
        x = deqq.size();
    for (size_t j = 0; j < x; j++)
    {
        std::cout << " " << deqq[j];
    }
    if (deqq.size() > 5)
        std::cout << " [...]";
    std::cout << "\n";
    start = clock();
    deqq = m.Mr_fordJohnson(deqq);
    end = clock();
    std::cout << "after :" ;

    x = 5;
    if (x > deqq.size())
        x = deqq.size();
    for (size_t j = 0; j < x; j++)
    {
        std::cout << " " << deqq[j] ;
    }

    if (deqq.size() > 5)
        std::cout << " [...]";
    std::cout << "\n";
      elapsed = static_cast<double>(end - start) * 1000.0 / CLOCKS_PER_SEC ;
    std::cout << "Time to process a range of  " << argc<< " elements with std::deque  "
              << elapsed << " ms" << std::endl;


    // for (size_t g = 0; g < deqq.size(); g++)
    // {
    //     std::cout <<  deqq[g] << " ";
    // }
    
    return (0);
}
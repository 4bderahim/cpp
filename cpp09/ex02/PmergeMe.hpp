#pragma once
#include <iostream>
#include <unistd.h>
#include <limits>
#include <vector>
#include <deque>
#include <algorithm>

#include <chrono>


class mergeme
{

    private:
        ////////////
    public:
        mergeme()
        {

        }
        
        // void set_vars(int ac, char **av)
        // {
        // }
        
        template<typename Container>

        Container Mr_fordJohnson(Container cont)
        {
            // std::vector<unsigned int >  cont ;
            if (cont.size() <= 1 )// stack Hero
                return cont;
            int i = 0;
            Container  smalls ;
            Container  bigs ;
            
            while (i < cont.size())
            {   
                unsigned int first = cont[i];
                unsigned int sec = cont[i+1];
                bigs.push_back((first < sec ? sec:first));
                smalls.push_back((first < sec ? first:sec));
                i += 2;
            }
            if (cont.size() %2 != 0)
                bigs.push_back(cont.back());
            
            smalls = Mr_fordJohnson(smalls);// do the same to the smalls ,, to split emm again.
            
            i = 0;
            // insert bigs to smalls(thatSouuld be sorted )
            while (i < bigs.size())
            {
                smalls.insert(std::lower_bound(smalls.begin(), smalls.end(), bigs[i]), bigs[i]);

                i++;
            }
            
         
           
            return (smalls);// sortedd
    
        }

        // }

};







//  int i = 1;
//             args--;
//             if (args %2 !=0)
//             {
//                 lonely = std::atol(argv[1]);
//                 std::cout << ">>>>>>>" << argv[1] << std::endl;
//                 i == 2;
//             }
//             while (i < args)
//             {
//                 unsigned int first = std::atol(argv[i]);
//                 unsigned int sec = std::atol(argv[i+1]);
//                 bigs.push_back((first < sec ? sec:first));
//                 smalls.push_back((first < sec ? first:sec));
//                 i += 2;
//             }

            
//             if (lonely != -1)
//                 smalls.push_back(lonely);
//             // mergiiing..
//             i  =0 ;
//             for (unsigned int i = 0; i < bigs.size(); i++)
//              {
//                 unsigned int one = bigs[i];
//                 bigs.erase(bigs.begin()+i);
//                 bigs.insert(std::lower_bound(bigs.begin(), bigs.end(), one), one);
//             }
            
//             i = 0;
//             while (i < smalls.size())
//             {
//                 // auto f = std::lower_bound(bigs.begin(), bigs.end(), smalls[i]);
//                 // std::cout << ">" << *f << "#" << smalls[i] << "<-----\n";
//                 bigs.insert(std::lower_bound(bigs.begin(), bigs.end(), smalls[i]), smalls[i]);
//                 i++;

//             }
//             for (size_t i = 0; i < bigs.size(); i++)
//             {
//                 std::cout << bigs[i] << "  ";
//             }
            
               
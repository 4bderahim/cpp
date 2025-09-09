#pragma once
#include <iostream>
#include <unistd.h>
#include <limits>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
class mergeme
{

    private:
        ////////////
    public:
        mergeme()
        {
            std::cout << "Constructed !" << std::endl;
        }
        ~mergeme()
        {
            std::cout << "destructed !" << std::endl;
        }
        mergeme(const mergeme& obj)
        {
            *this = obj;
        }
        
        
        template<typename Container>

        Container Mr_fordJohnson(Container cont)
        {
            // std::vector<unsigned int >  cont ;
            if (cont.size() <= 1 )// stack Hero
                return cont;
            int i = 0;
            Container  smalls ;
            Container  bigs ;
            unsigned int lonely = -1;
            size_t sizee = cont.size();
            if (sizee %2 != 0)
            {
                lonely  = cont.back(); 
                cont.erase(cont.end()-1);
            }
            while (i < cont.size())
            {   
                unsigned int first = cont[i];
                unsigned int sec = cont[i+1];

                bigs.push_back((first < sec ? sec:first));
                smalls.push_back((first < sec ? first:sec));
                i += 2;
            }
             if (lonely != -1)
                bigs.push_back(lonely);
            
            smalls = Mr_fordJohnson(smalls);// do the same to the smalls ,, to split emm again.
            
            
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


#pragma once

#include <iostream>
#include <unistd.h>
#include <limits>
    #include <vector>
    #include <deque>
#include <algorithm>



class mergeme
{

    private:
        // std::vector<std::pair< unsigned int,unsigned int>> pairs;
        
       long lonely;
    public:
        mergeme():lonely (-1)
        {

        }
        void pairing(int args, char **argv, int vector)
        {
            std::vector<unsigned int> bigs;
            std::vector<unsigned int> smalls;
            std::vector<unsigned int> final;
           if (vector)
           {
                std::deque<unsigned int> bigs;
                std::deque<unsigned int> smalls;
                std::deque<unsigned int> final;

           }
            int i = 1;
            args--;
            if (args %2 !=0)
            {
                lonely = std::atol(argv[0]);
                i == 2;
            }
            while (i < args)
            {
                unsigned int first = std::atol(argv[i]);
                unsigned int sec = std::atol(argv[i+1]);
                bigs.push_back((first < sec ? sec:first));
                smalls.push_back((first < sec ? first:sec));
                i += 2;
            }

            
            if (lonely!= -1)
                smalls.push_back(lonely);
            // mergiiing..
            i  =0 ;
            for (unsigned int i = 0; i < bigs.size(); i++)
             {
                unsigned int one = bigs[i];
                bigs.erase(bigs.begin()+i);
                bigs.insert(std::lower_bound(bigs.begin(), bigs.end(), one), one);
            }
            
            i = 0;
            while (i < smalls.size())
            {
                // auto f = std::lower_bound(bigs.begin(), bigs.end(), smalls[i]);
                // std::cout << ">" << *f << "#" << smalls[i] << "<-----\n";
                bigs.insert(std::lower_bound(bigs.begin(), bigs.end(), smalls[i]), smalls[i]);
               

                i++;

            }
            for (size_t i = 0; i < bigs.size(); i++)
            {
                std::cout << bigs[i] << "  ";
            }
            
               
            
    }

        // }

};
#pragma once

#include <iostream>
#include <unistd.h>
#include <limits>
    #include <vector>
    #include <deque>




class mergeme
{

    private:
        // std::vector<std::pair< unsigned int,unsigned int>> pairs;
        
        unsigned int lonely;
    public:
        void pairing(int args, char **argv, int vector)
        {
        //    if (vector)
        //    {

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
            
    }

        }

};
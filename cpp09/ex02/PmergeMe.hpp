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
        std::vector<unsigned int> seq;
    public:
        mergeme()
        {
            //std::cout << "mergme constructed" << std::endl;
        }
        ~mergeme()
        {
            // std::cout << "destructed !" << std::endl;
        }
        std::vector<unsigned int> get_seq(){return (this->seq);}
        mergeme(const mergeme& obj)
        {
            *this = obj;
        }
        
        const mergeme &operator=(const mergeme& m)
        {
            (void)m;
            return *this;
        }

        std::vector<unsigned int> generateJacobstahl(unsigned int n)
        {
            std::vector<unsigned int> jacobstahl;
            jacobstahl.push_back(0); // J(0)
            if (n == 1) return jacobstahl;
            jacobstahl.push_back(1); // J(1)
            for (unsigned int i = 2; i < n; ++i) {
                unsigned int next = jacobstahl[i - 1] + 2 * jacobstahl[i - 2];
                jacobstahl.push_back(next);
            }
            return jacobstahl;
        }
        template<typename Container>
        Container Mr_fordJohnson(Container cont)
        {
            if (cont.size() <= 1 )// stack Hero
                return cont;
            size_t i = 0;
            Container  smalls;
            Container  bigs;
            int lonely = -1;
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
            i = 0;
            // insert bigs to smalls(thatShouuld be sorted)
            unsigned int prev = 0;
            while (i < this->seq)
            {
                unsigned int seq_pos = i;
                while(seq_pos  >= prev)
                {
                    smalls.insert(std::lower_bound(smalls.begin()+prev, smalls.end()-seq_pos, bigs[i]), bigs[i]);
                    seq_pos--;
                }
                prev = i;
                i++;
            }
            
            
            // while (i < bigs.size())
            // {
            //     smalls.insert(std::lower_bound(smalls.begin(), smalls.end(), bigs[i]), bigs[i]);
            //     i++;
            // }
            return (smalls);// sortedd
        }
};


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
            std::vector<unsigned int> jacobstahl_insert;
            n = 11;
            jacobstahl.push_back(0);
            if (n == 1)
                return jacobstahl;
                // printf("\t####");
            jacobstahl.push_back(1);
            // unsigned int prev;
            int d = 0;
            for (unsigned int i = 2; i < n; ++i) {
                
                unsigned int next = jacobstahl[i - 1] + 2 * jacobstahl[i - 2];

                if (next >= 3)
                {
                    for (size_t ii = jacobstahl[jacobstahl.size()-2]+1; ii < jacobstahl[jacobstahl.size()-1]; ii++)
                    {
                        // std::cout << jacobstahl[jacobstahl.size()-2] <<"+++++++++"<< jacobstahl[jacobstahl.size()-1]  << "|<<" << std::endl;
                        jacobstahl_insert.push_back(ii);
                    }
                }
                jacobstahl.push_back(next);
                jacobstahl_insert.push_back(next);

                d++;
                // prev =  next;
            }
            this->seq = jacobstahl_insert;
         for (size_t l = 0; l < this->seq.size(); l++)
         {
            std::cout << "index:"<< this->seq[l] << std::endl; 
         }
         
            return this->seq;
        }
       template<typename Container>


        Container Mr_fordJohnson(Container cont)


        {



            if (cont.size() <= 1 )// stack Hero
                return cont;

            size_t i = 0;
            Container  smalls;
            Container  bigs;
            long int lonely = -1;

            // size_t sizee = cont.size();

           
            if (cont.size() %2 != 0)
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
                smalls.push_back(lonely);


            // printf("\t-------------");
            // for (size_t ip = 0; ip < bigs.size(); ip++)
            // {
            //     std::cout << bigs[ip] << "<<:" << std::endl;
            //     /* code */
            // }
            
            bigs = Mr_fordJohnson(bigs);// do the same to the smalls ,, to split emm again.
             printf("\t\t\t########%zu#%u#####\n", cont.size(),  cont.back());
            for (size_t w = 0; w < smalls.size(); w++)
            {
                std::cout  << "|>" << smalls[w] << std::endl;
            }
            
            if (bigs.size() <= 1 )
                {
                    this->seq.insert(this->seq.begin(), 0);
                }
            
            unsigned int seq_pos = 0;/// seq doesnt start from 0
            while (this->seq[seq_pos] < smalls.size())
            {
                std::cout << ">" << this->seq[seq_pos] << "size::" << smalls.size() << std::endl;
                bigs.insert(std::lower_bound(bigs.begin(), bigs.end(), smalls[this->seq[seq_pos]]), smalls[this->seq[seq_pos]]);
                if (this->seq[seq_pos] >= smalls.size())
                    {
                        
                    }
                seq_pos++;
            }
            // while (i < bigs.size())

            // {

            //     smalls.insert(std::lower_bound(smalls.begin(), smalls.end(), bigs[i]), bigs[i]);

            //     i++;

            // }

            return (bigs);// sortedd

        }
};


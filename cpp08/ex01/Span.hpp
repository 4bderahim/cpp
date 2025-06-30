#pragma once
#include <iostream>
#include <vector>


#include <exception>

class maxsize : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("*maxsize exception *");
        }
};

class Span
{
    private:
        std::vector<int> ve;
        unsigned int N;
        maxsize max;
    public:
        Span(): N(0)
        {
            ve.reserve(N);
            std::cout << "Span constructed !!" << std::endl;
        }
        Span(unsigned int n)
        {
            N = n;
            ve.reserve(n);
            std::cout << "Span constructed (args) !!" << std::endl;
        }

        ~Span()
        {
            std::cout << "Span destructed !!" << std::endl;
        }

        Span(const Span &s);
        Span &operator=(const Span &sp)
        {
            if (this != &sp)
            {
                this->N =  sp.N;
                this->ve =  sp.ve;

            }
            return (*this);
        }

        void addNumber(int toadd)
        {
            if (ve.size() == (size_t)N)
                throw max; 
            ve.push_back(toadd);
        }   
        int longestSpan()
        {
            std::vector<int> t = ve;
            sort(t.begin(), t.end());
            std::vector<int>::iterator it;
            // std::cout << *(t.end()-1) << "|_"<<t.size()<< "__|" << *t.begin() << std::endl;
            return (*(t.end()-1) - *t.begin());   
        }

        int shortestSpan()
        {
            std::vector<int> t = ve;
            sort(t.begin(), t.end());
            if (t.size() == 2)
                return (t.end() - t.begin());
            std::vector<int>::iterator it;
            int short_ = (t.end() - t.begin());
            for (it = t.begin()+1; it != t.end(); it++)
            {
                if (( *it- *(it-1)) < short_)
                    short_ = ( ( *it- *(it-1)));
            }
            return (short_);
        }

        template <typename T> void addSeqNumbers(T begin, T last)
        {
            unsigned int i = 0;
            T tmp =  begin;
            while (tmp != last)
            {
                i++;
                tmp++;
            }
            if (i > N)
                throw max;
            while (begin != last)
            {
                ve.push_back(*begin);
                begin++;
            }
        }
};
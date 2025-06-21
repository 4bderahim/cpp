

#pragma once

// #include "index_is_out_of_bound.hpp"

#include <iostream>

#include <exception>
template <typename T>
class Array 
{
    private:
        T *arr;
        size_t sizee;

    public:
        
        Array(): sizee(0)
        {
            arr = new T(sizee);
            std::cout << "Array destructed !" << std::endl;
        }
        void set()
        {
            this->arr[0] = 22;
        }
        Array(unsigned int n)
        {
            // printf("\t||%u||\n", n);
            sizee = n;
            arr = new T(sizee);
            std::cout << "Array destructed !" << std::endl;
        }

        ~Array()
        {
            std::cout << "Array constructed !" << std::endl;
        }

        Array(const Array &arr)
        {
            *this = arr;
        }
        unsigned int size()
        {
            return (this->sizee);
        }

        Array &operator=(const Array &arr)
        {
            if (*this != arr)
            {
                this->size = arr.sizee;
                this->arr = new T(this->size);
                for (size_t i = 0; i < this->size; i++)
                {
                    this->arr[i] = arr.arr[i];
                }
                delete[] arr;
            }
            return *this;
        }
        class index_is_out_of_bound:public std::exception
        {

        public:
            const char *what() const throw()
            {
              return ( "index is out of bound" );
         }
        };
        T &operator[](size_t idx)
        {
            if (idx > this->sizee)
                {
                    index_is_out_of_bound k;
                    throw k;
                }
            return this->arr[idx];
        }
};
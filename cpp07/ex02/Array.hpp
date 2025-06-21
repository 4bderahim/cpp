#include <iostream>


template <typename T>
class Array
{
    private:
        T *arr;
        size_t size;
    public:
        
        Array(): size(0)
        {
            arr = new T(size);
            std::cout << "Array destructed !" << std::endl;
        }

        Array(unsigned int n)
        {
            arr = new T(n);
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
            return (this->size);
        }

        Array &operator=(const Array &arr)
        {
            if (*this != arr)
            {
                this->size = arr.size
                this->arr = new T(this->size);

                for (size_t i = 0; i < this->size; i++)
                {
                    this->arr[i] = arr.arr[i];
                }
                delete[] arr;
            }
            return *this;
        }
        
        T &operator[](size_t idx)
        {
            if (idx > this->size)
                throw std::exception;
            return this->arr[idx];

        }
};
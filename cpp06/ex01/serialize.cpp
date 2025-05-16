#include "serialize.hpp"

serialize_::serialize_()
{
    std::cout << "serialize_ constructed" << std::endl;
}
serialize_::serialize_(const serialize_ &s)
{
    *this = s;
}

serialize_::~serialize_()
{
    std::cout << "serialize_ destructed" << std::endl;
}
serialize_& serialize_::operator=(const serialize_ &s)
{
    return (*this);
}

uintptr_t serialize_::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}        
Data* serialize_::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}


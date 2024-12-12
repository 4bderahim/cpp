#include "Contacts.hpp"
#ifndef ___PHONE___
#define ___PHONE___
class Phonebook
{
    public:
        Contact contacts[8];
        void print_info(std::string str);
};

#endif
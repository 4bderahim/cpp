#include "contacts.hpp"
#ifndef ___PHONE___
#define ___PHONE___
class Phonebook
{
    public:
    Contact contacts[8];
    // public:
    void add_contact(std::string contact_name,std::string contact_last_name,std::string contact_nickname, std::string contact_darkest_sec, int index);
    // public:
    void search(int index);
};
#endif
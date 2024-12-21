
#pragma once
#ifndef ___PHONE___
#define ___PHONE___
#include "Contacts.hpp"
class Phonebook
{
    private:
        Contact contacts[8];
        void search(Phonebook phone,  int index);
        void print_info(std::string str);
    public:
        int fill_attr(Phonebook *phonebook, int index_count);
        Contact get_contact(int index);
        int display_stat(Phonebook  phonebook , int count );
        void display_all_contact_info(Phonebook phone, int index);
};

#endif
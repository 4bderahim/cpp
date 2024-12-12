
#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>    
#include <cctype>  
#include <cstdlib>
#include <iomanip>

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
class Contact
{
    private:
        std::string contact_name, contact_last_name, contact_nickname, contact_darkest_sec, phone_num;
        // void get_contact_name(Contact contact, int  cmd);
        // void get_contact_lastname(Contact contact, int  cmd);
        // void get_contact_nickname(Contact contact, int  cmd);
        // void get_contact_darksec(Contact contact, int  cmd);

    public:
        Contact get_phone_num(Phonebook phone, int index);
        void search(int index);
        void Contact::display_all_contact_info(Phonebook phone, int index);
};
#endif  
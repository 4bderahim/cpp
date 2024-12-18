#include <iostream>
#include <string.h>
#include <iomanip>

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
class Contact
{
    private:
        std::string contact_name, contact_last_name, contact_nickname, contact_darkest_sec, phone_num;
    public:
        int fill(Contact contact);
        std::string get_contact_phone_num(Contact contact);
        std::string get_contact_name(Contact contact);
        std::string get_contact_last_name(Contact contact);
        std::string get_contact_nickname(Contact contact);
        std::string get_contact_darkest_sec(Contact contact);
};

#endif  
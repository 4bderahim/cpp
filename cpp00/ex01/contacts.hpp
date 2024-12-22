
#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <string>

class Contact
{
    private:
        std::string contact_name, contact_last_name, contact_nickname, contact_darkest_sec, phone_num;
    public:
        std::string get_contact_phone_num(Contact contact);
        int fill();
        std::string get_contact_name(Contact contact);
        std::string get_contact_last_name(Contact contact);
        std::string get_contact_nickname(Contact contact);
        std::string get_contact_darkest_sec(Contact contact);
};

#endif  
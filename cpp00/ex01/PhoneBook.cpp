// #include "cpp.h"
                            
#include "contacts.hpp"
#include "PhoneBook.hpp"

void Phonebook::print_info(std::string str)
{
    int i;
    i =0;

    while (str[i])
    {
        char c = str[i];
        if (i == 9)
        {
            std::cout << ".";
            break;
        }
        std::cout << c;
        i++;
    }
}

void Phonebook::search(int index)
{
    std::cout << std::setw(9);
    std::cout << index;
    std::cout << "|" << std::setw(10-contacts[index].contact_name.length()+1);
    print_info(contacts[index].contact_name);
    std::cout << "|" << std::setw(10-contacts[index].contact_last_name.length()+1);
    print_info(contacts[index].contact_last_name);
    std::cout << "|" << std::setw(10-contacts[index].contact_nickname.length()+1);
    print_info(contacts[index].contact_nickname);
    std::cout << "\n";
    // std::string strng;
}

void Phonebook::display_all_contact_info(int index)
{
    std::cout << "\nphone number       :" << contacts[index].phone_num << std::endl;
    std::cout << "first name          :" << contacts[index].contact_name << std::endl;
    std::cout << "last name           :" << contacts[index].contact_last_name << std::endl;
    std::cout << "nickname            :" << contacts[index].contact_nickname << std::endl;
    std::cout << "contact_darkest_sec :" << contacts[index].contact_name << std::endl;
}

std::string new_entry(std::string order)
{
    std::string new_;
    using namespace std;
    std::cout << "enter " << order << ":::";
    getline(cin, new_);
    if (cin.eof() || cin.fail() || cin.bad())
        {
            std::cout << "error eof";
            exit(1);
        }
    return (new_);
}

int display_stat(Phonebook  phone, int count )
{
    if (count == 0)
        {
            std::cout << "[!] no contacts yet, try to ADD one" << std::endl;
            return (0);
        }
    std::cout << "\n\n";
    std::cout << "    INDEX|" <<  "      NAME|" << " LAST NAME|" << "  NICKNAME\n";
    for (int i = 0; i < count ;i++)
        phone.search(i);
    std::cout << "\n";
    return (1);
}

std::string check_num(std::string str)
{
    for (size_t i = 0; i < std::strlen(str.c_str()); i++)
    {
        if (!isdigit(str[i]))
            return ("");
    }
    return (str);
}

int main()
{
    std::vector<std::string> alo;
    // using namespace std;
    int index_count , contacts_count;
    index_count = 0;
    contacts_count = 0;
    Phonebook phonebook;
    std::cout << "\nADD     : add new contact\nSEARCH  : search for an existing contact\nEXIT    : exit prompt\n\n\n" << std::endl; 
    while (1)
    {
        std::string cmd;
        using namespace std;
        std::cout << "type command >>";
        std::getline(cin, cmd);
        if (cin.eof() || cin.fail())
            exit(1);
        if (!cmd.compare("SEARCH"))
        {
            std::string search_;
            if (!display_stat(phonebook, contacts_count))
                continue;
            while(1)
            {
                std::cout << "enter contact index(0~7):";
                std::getline(cin , search_);
                int i;
                i = 0;
                if (cin.eof() || cin.fail())
                    break;
                std::sscanf(search_.c_str(), "%d", &i);
                if (!search_.compare("EXIT"))
                    break;
                if (check_num(search_) == "" || !(i <= 7 && i >= 0))
                    {
                        std::cout << "[-] indexes are from 0 to 7" << std::endl;
                        continue;
                    }       
                if (i > contacts_count-1)
                    std::cout << "[!] no contact at index " << i << std::endl;
                else
                    phonebook.display_all_contact_info(i);    
            }
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name ,contact_last_name, contact_nickname, contact_darkest_sec;
            phonebook.contacts[index_count].phone_num = check_num(new_entry("phone_number"));
            phonebook.contacts[index_count].contact_name = new_entry("contact_name");
            phonebook.contacts[index_count].contact_last_name = new_entry("contact_last_name");
            phonebook.contacts[index_count].contact_nickname = new_entry("contact_nickname");
            phonebook.contacts[index_count].contact_darkest_sec = new_entry("contact_darkest_sec");
            if (phonebook.contacts[index_count].phone_num == "" || phonebook.contacts[index_count].contact_name == "" || phonebook.contacts[index_count].contact_last_name == "" || phonebook.contacts[index_count].contact_nickname == "" || phonebook.contacts[index_count].contact_darkest_sec == "")
                {
                    std::cout << "[-] failed to add the new contact\n";
                    continue;
                }
            index_count++;
            if (contacts_count < 8)
                contacts_count++;
        }
        if (index_count == 8)
            index_count = 0;
        if (!cmd.compare("EXIT"))
            break;
    }
}
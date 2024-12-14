// #include "cpp.h"
                            
#include "Contacts.hpp"
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

void Phonebook::search(Phonebook phone,  int index)
{
    std::cout << std::setw(9);
    std::cout << index;
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_name(get_contact(phone, index)).length() +1);
    phone.print_info(phone.contacts->get_contact_last_name(contacts[index]));// get_contact(phone, index)));
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_last_name(phone.get_contact(phone, index)).length() +1);
    phone.print_info(phone.contacts->get_contact_nickname(get_contact(phone, index)));
    //phone.print_info(contact.get_contact_name(phone, index).contact_last_name);
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_nickname(phone.get_contact(phone, index)).length() +1);
    phone.print_info(phone.contacts->get_contact_nickname(get_contact(phone, index)));
    std::cout << "\n";
}

Contact Phonebook::get_contact(Phonebook phone, int index)
{
    (void)phone;
    return (phone.contacts[index%8]);
}

std::string Contact::get_contact_phone_num(Contact contact)
{
    return (contact.phone_num);
}
std::string Contact::get_contact_name(Contact contact)
{
    return (contact.contact_name);
}

std::string Contact::get_contact_last_name(Contact contact)
{
    return (contact.contact_last_name);
}

std::string Contact::get_contact_nickname(Contact contact)
{
    return (contact.contact_nickname);
}

std::string Contact::get_contact_darkest_sec(Contact contact)
{
    return (contact.contact_darkest_sec);
}


void Phonebook:: display_all_contact_info(Phonebook phone, int index)
{
    std::cout << "\nphone number       :"  << phone.contacts->get_contact_phone_num(phone.get_contact(phone, index)) << std::endl;
    std::cout << "first name          :"  << phone.contacts->get_contact_name(phone.get_contact(phone, index)) << std::endl;
    std::cout << "last name           :"  << phone.contacts->get_contact_last_name(phone.get_contact(phone, index)) << std::endl;
    std::cout << "nickname            :"  << phone.contacts->get_contact_nickname(phone.get_contact(phone, index)) << std::endl;
    std::cout << "contact_darkest_sec :"  << phone.contacts->get_contact_darkest_sec(phone.get_contact(phone, index)) << std::endl;
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

int Phonebook::display_stat(Phonebook  phonebook , int count )
{
    if (count == 0)
    {
        std::cout << "[!] no contacts yet, try to ADD one" << std::endl;
        return (0);
    }
    std::cout << "\n\n";
    std::cout << "    INDEX|" <<  "      NAME|" << " LAST NAME|" << "  NICKNAME\n";
    for (int i = 0; i < count ;i++)
        phonebook.search(phonebook, i);
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

int Contact::fill(Contact contact)
{
    (void)contact;
    this->phone_num = check_num(new_entry("phone_number"));
    this->contact_name             = new_entry("contact_name");
    this->contact_last_name        = new_entry("contact_last_name");
    this->contact_nickname         = new_entry("contact_nickname");
    this->contact_darkest_sec      = new_entry("contact_darkest_sec");
    if (this->phone_num == "" || this->contact_name == "" || this->contact_last_name == "" || this->contact_nickname == "" || this->contact_darkest_sec == "")
    {
        std::cout << "[-] failed to add the new contact\n";
        return (0);
    }
    return (1);
}

int Phonebook::fill_attr(Phonebook *phonebook, int index_count)
{
    int res;
    res = phonebook->contacts[index_count].fill(get_contact(*phonebook, index_count) ); 
    if (res == 0)
        return (0);
    // get_phone_num(phonebook, index_count).contact_name      = new_entry("contact_name");
    // get_phone_num(phonebook, index_count).contact_last_name      = new_entry("contact_last_name");
    // get_phone_num(phonebook,index_count).contact_nickname      = new_entry("contact_nickname");
    // get_phone_num(phonebook, index_count).contact_darkest_sec      = new_entry("contact_darkest_sec");
    // if (phonebook.contacts[index_count].phone_num == "" || phonebook.contacts[index_count].contact_name == "" || phonebook.contacts[index_count].contact_last_name == "" || phonebook.contacts[index_count].contact_nickname == "" || phonebook.contacts[index_count].contact_darkest_sec == "")
    // {
    //     std::cout << "[-] failed to add the new contact\n";
    //     return (0);
    // }
    return (1);
}

int main()
{
    std::vector<std::string> alo;
    // using namespace std;
    int index_count , contacts_count;
    index_count = 0;
    contacts_count = 0;
    Phonebook phonebook;
    Contact contact;
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
            if (!phonebook.display_stat(phonebook, contacts_count))
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
                    phonebook.display_all_contact_info(phonebook ,i);    
            }
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name ,contact_last_name, contact_nickname, contact_darkest_sec;
            int t = phonebook.fill_attr(&phonebook, index_count);
            // contact.get_phone_num(phonebook , index_count);// get_phone_num(phonebook, index).phone_num     = check_num(new_entry("phone_number"));
            // contact.get_phone_num(phonebook, index_count).contact_name      = new_entry("contact_name");
            // contact.get_phone_num(phonebook, index_count).contact_last_name      = new_entry("contact_last_name");
            // contact.get_phone_num(phonebook,index_count).contact_nickname      = new_entry("contact_nickname");
            // contact.get_phone_num(phonebook, index_count).contact_darkest_sec      = new_entry("contact_darkest_sec");
            if (t == 0)
                continue;
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
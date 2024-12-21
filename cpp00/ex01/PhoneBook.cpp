
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
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_name(get_contact( index)).length() +1);
    phone.print_info(phone.contacts->get_contact_name(contacts[index]));
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_last_name(phone.get_contact( index)).length() +1);
    phone.print_info(phone.contacts->get_contact_last_name(get_contact( index)));
    std::cout << "|" << std::setw(10 - phone.contacts->get_contact_nickname(phone.get_contact( index)).length() +1);
    phone.print_info(phone.contacts->get_contact_nickname(get_contact( index)));
    std::cout << "\n";
}
//-------
Contact Phonebook::get_contact(  int index)
{
    return (this->contacts[index]);
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
    std::cout << "\nphone number       :"  << phone.contacts->get_contact_phone_num(phone.get_contact( index)) << std::endl;
    std::cout << "first name          :"  << phone.contacts->get_contact_name(phone.get_contact( index)) << std::endl;
    std::cout << "last name           :"  << phone.contacts->get_contact_last_name(phone.get_contact( index)) << std::endl;
    std::cout << "nickname            :"  << phone.contacts->get_contact_nickname(phone.get_contact( index)) << std::endl;
    std::cout << "contact_darkest_sec :"  << phone.contacts->get_contact_darkest_sec(phone.get_contact( index)) << std::endl;
}

std::string new_entry(std::string order)
{
    std::string new_;
    std::cout << "enter " << order << ":::";
    std::getline(std::cin, new_);
    if (std::cin.eof() || std::cin.fail() || std::cin.bad())
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


int Contact::fill()
{
    Contact contact;
    contact.phone_num                = check_num(new_entry("phone_number"));
    contact.contact_name             = new_entry("contact_name");
    contact.contact_last_name        = new_entry("contact_last_name");
    contact.contact_nickname         = new_entry("contact_nickname");
    contact.contact_darkest_sec      = new_entry("contact_darkest_sec");
    if (contact.phone_num == "" || contact.contact_name == "" || contact.contact_last_name == "" || contact.contact_nickname == "" || contact.contact_darkest_sec == "")
    {
        std::cout << "[-] failed to add the new contact!!\n" << std::endl;
        return (0);
    }
    this->phone_num                =contact.phone_num           ;
    this->contact_name       =contact.contact_name        ;
    this->contact_last_name  =contact.contact_last_name   ;
    this->contact_nickname   =contact.contact_nickname    ;
    this->contact_darkest_sec=contact.contact_darkest_sec ;
    return (1);
}

int Phonebook::fill_attr(Phonebook *phonebook, int index_count)
{
    int res;
    res = phonebook->contacts[index_count].fill(); 
    if (res == 0)
        return (0);
    return (1);
}

int main()
{
    // std::vector<std::string> alo;
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
        // using namespace std;
        std::cout << "type command >>";
        std::getline(std::cin, cmd);
        if (std::cin.eof() || std::cin.fail())
            exit(1);
        if (!cmd.compare("SEARCH"))
        {
            std::string search_;
            if (!phonebook.display_stat(phonebook, contacts_count))
                continue;
            while(1)
            {
                std::cout << "enter contact index(0~7):";
                std::getline(std::cin , search_);
                int i;
                i = 0;
                if (std::cin.eof() || std::cin.fail())
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
                    phonebook.display_all_contact_info(phonebook, i);    
            }
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name ,contact_last_name, contact_nickname, contact_darkest_sec;
            int t = phonebook.fill_attr(&phonebook, index_count);
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
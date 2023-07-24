#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class phonebook
{
    private:
        contact contacts[8];
        int index;
        int size;
        int control;
        int control2;
        std::string fname, lastname, nickName, phonumber, darksecret;
    public:
        phonebook();
        void addcontact();
        void searchcontact();
        std::string get_line(std::string message, std::string input);
        std::string writeperson(std::string str);
        void indexcontrol();
};

#endif
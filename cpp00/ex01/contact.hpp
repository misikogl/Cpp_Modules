#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        contact();
        void Setname(std::string sname);
        std::string Getname();
        void Setlastname(std::string slastname);
        std::string Getlastname();
        void SetPhonenumber(std::string sphonenumber);
        std::string Getphonenumber();
        void SetNickname(std::string snickname);
        std::string Getnickname();
        void Setdarksecret(std::string sdarksecret);
        std::string Getdarksecret();
};

#endif
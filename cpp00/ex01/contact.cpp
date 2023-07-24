#include "phonebook.hpp"

contact::contact()
{
}

void contact::Setname(std::string sname)
{
    FirstName = sname;
}
std::string contact::Getname()
{
    return FirstName;
}

void contact::Setlastname(std::string slastname)
{
    LastName = slastname;
}
std::string contact::Getlastname()
{
    return LastName;
}

void contact::SetPhonenumber(std::string sphonenumber)
{
    PhoneNumber = sphonenumber;
}
std::string contact::Getphonenumber()
{
    return PhoneNumber;
}

void contact::SetNickname(std::string snickname)
{
    NickName = snickname;
}
std::string contact::Getnickname()
{
    return NickName;
}

void contact::Setdarksecret(std::string sdarksecret)
{
    DarkestSecret = sdarksecret;
}
std::string contact::Getdarksecret()
{
    return DarkestSecret;
}
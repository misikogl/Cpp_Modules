#include <iostream>     
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << std::endl;
    std::cout << "----------- Memory Adress --------" << std::endl;
    std::cout << "STRING:       " << &string << std::endl;
    std::cout << "stringPTR:    " << stringPTR << std::endl;
    std::cout << "stringREF:    " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "-----------  Value of ... --------" << std::endl;
    std::cout << "STRING:       " << string << std::endl;
    std::cout << "stringPTR:    " << *stringPTR << std::endl;
    std::cout << "stringREF:    " << stringREF << std::endl;
    std::cout << std::endl;
}
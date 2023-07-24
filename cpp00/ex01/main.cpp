#include "phonebook.hpp"

int main()
{
    phonebook pbook;
    std::string command;

    std::cout << std::endl;
    std::cout << "***************************************************" << std::endl;
    std::cout << "**********";
    std::cout << "\033[36m";
    std::cout << "📞 THIS IS YOUR PHONEBOOK 📞";
    std::cout << "\033[0m";
    std::cout << "*************" << std::endl;
    std::cout << "*****";
    std::cout << "\033[31m";
    std::cout << "!YOU CAN ADD CONTACT BUT ONLY 8 PERSON!";
    std::cout << "\033[0m";
    std::cout << "*******" << std::endl;
    std::cout << "***************************************************" << std::endl;
    std::cout << std::endl;
    
    while (1)
    {
        std::cout << "\033[36m";
        std::cout << "ENTER COMMAND << ADD(+), SEARCH(?), EXIT(X) >>" << std::endl;
        std::cout << "---> ";
        std::cout << "\033[0m";
        getline(std::cin, command);
        std::cout << std::endl;

        if (command == "EXIT")
        {
            break;
        }
        else if (command == "ADD")
        {
            pbook.addcontact();
        }
        else if (command == "SEARCH")
        {
            pbook.searchcontact();   
        }
        else
			std::cout << "\033[31m"
					  << "!!!PLEASE ENTER VALID COMMAND (ADD, SEARCH,EXIT)!!!"
                      << "\033[0m"<< std::endl;
    }
}
#include "phonebook.hpp"

phonebook::phonebook()
{
    index = 0;
    size = 0;
    control2 = 1;
    control = 0;
}

std::string phonebook::get_line(std::string message, std::string input)
{
	std::cout << message;
	getline(std::cin, input);
	while (1)
	{
		if (input.empty())
		{
			std::cout << "can not be empty!" << std::endl;
			std::cout << message;
			getline(std::cin, input);
		}
		else
		{
			break;
		}
	}
	return input;
}
void phonebook::addcontact()
{
    index = index % 8;
    contacts[index].Setname(get_line("First name: ", fname));
    contacts[index].Setlastname(get_line("Last name: ", lastname));
    contacts[index].SetNickname(get_line("Nick name: ", nickName));
    contacts[index].SetPhonenumber(get_line("Phone Number: ", phonumber));
    contacts[index].Setdarksecret(get_line("Dark Secret: ", darksecret));
    std::cout << "\033[32m";
    std::cout << "A new person has been added to your guide." << std::endl;
    std::cout << "\033[0m";
    if (index == 7)
    {
        size = 8;
        control = 1;
    }
    if (control == 0)
        size = index + 1;
    index++;
}

std::string phonebook::writeperson(std::string str)
{
    if (str.length() < 10)
        return str;
    else
        return str.substr(0, 9).append(".");
}

void phonebook::indexcontrol()
{
    std::string inputindex;
    std::cout << "Enter index: ";
    getline(std::cin, inputindex);
    int num;
    while (1)
    {

        if (!inputindex.empty())
        {            
            for (size_t i = 0; i < inputindex.length(); i++)
            {
                if (!isdigit(inputindex[i]))
                {
                    std::cout << "\033[31m";
                    std::cout << "invalid input!!" << std::endl;
                    std::cout << "\033[0m";
                    control2 = 0;
                    break;
                }
                control2 = 1;
            }
            if (control2)
            {
                num = std::stoi(inputindex);
                num--;
                if (num >= 0 && num < size)
                {
                    std::cout << "index: " << num + 1 << std::endl;
                    std::cout << "First Name: " << contacts[num].Getname() << std::endl;
                    std::cout << "Last Name: " << contacts[num].Getlastname() << std::endl;
                    std::cout << "Nick Name: " << contacts[num].Getnickname() << std::endl;
                    std::cout << "Phone Number: " << contacts[num].Getphonenumber() << std::endl;
                    std::cout << "Dark Secret: " << contacts[num].Getdarksecret() << std::endl;
                    std::cout << std::endl;
                }
                else
                {
                    std::cout << "No Person!!" << std::endl;
                }
                break;
            }
            break;
        }
        else
        {
            std::cout << "Enter an Index!!" << std::endl;
            std::cout << "Enter index: ";
            getline(std::cin, inputindex);
        }

    }
}

void phonebook::searchcontact()
{
    std::cout << std::setw(10) << "Index" 
        << "|"<< std::setw(10) << "First Name"
        << "|"<< std::setw(10) << "Last Name"
        << "|"<< std::setw(10) << "Nick Name" << std::endl;
    std::cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|" << std::setw(10)
        << writeperson(contacts[i].Getname())  << "|" << std::setw(10)
        << writeperson(contacts[i].Getlastname()) << "|" << std::setw(10)
        << writeperson(contacts[i].Getnickname()); 
        std::cout<<std::endl;
    }
    indexcontrol();
}
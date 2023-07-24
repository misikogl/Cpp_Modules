#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << std::endl;
    std::cout << "Debug: ";
    harl.complain("DEBUG");

    std::cout << "Info: ";
    harl.complain("INFO");

    std::cout << "Warning: ";
    harl.complain("WARNING");

    std::cout << "Error: ";
    harl.complain("ERROR");
    std::cout << std::endl;

    return (0);
}
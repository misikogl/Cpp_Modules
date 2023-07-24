#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
		{
			std::string argv_i = argv[i];
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				argv_i[j] = toupper(argv_i[j]);
                std::cout << argv_i[j];
			}
        }
		std::cout << std::endl;
    }
    return 0;
}

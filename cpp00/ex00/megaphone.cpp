#include <iostream>

bool	is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (true);
	if ('A' <= c && c <= 'Z')
		return (true);
	return (false);
}

bool	is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (true);
	return (false);
}

char	to_upper(char c)
{
	if (is_alpha(c))
	{
		if (is_lower(c))
			return(c - 'a' + 'A');
	}
	return (c);
}

int		main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				std::cout << to_upper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
NAME = weapon
SRC = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp 
CC = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC.cpp=.o)

all  : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :all clean fclean re 
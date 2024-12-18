CC = c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= violence

CPPFILES	= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OFILES		= $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o : %.cpp HumanB.hpp Weapon.hpp HumanA.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	 rm -f $(NAME)
re: fclean all
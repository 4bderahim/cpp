CC = c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= Zombie

CPPFILES	= Zombie.cpp main.cpp
OFILES		= $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o : %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	 rm -f $(NAME)
re: fclean all
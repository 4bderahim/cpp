CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harl

CPPFILES = harl.cpp
OFILES = {CPPFILES:.cpp=.o}

all : $(NAME)


all : $(OFILES)
	$(CC) -o $(CPPFLAGS) $(OFILES) -o $(NAME)
%.o : %.cpp harl.hpp
	$(CC) $(CPPFLAGS) -c $< -c $@

clean :
	rm -rf $(OFILES)
fclean : clean
	rm -rf $(NAME)
re :
	fclean all



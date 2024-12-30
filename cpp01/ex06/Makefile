CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = HarlFilter
CPPFILES = harl.cpp main.cpp
OFILES = ${CPPFILES:.cpp=.o}

all : $(NAME)


$(NAME) : $(OFILES)
	$(CC) -o $(CPPFLAGS) $(OFILES) -o $(NAME)
%.o : %.cpp harl.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean :
	rm -rf $(OFILES)
fclean : clean
	rm -rf $(NAME)
re :
	fclean all



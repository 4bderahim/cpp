CC = c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= replace

CPPFILES	= replace.cpp

OFILES		= $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o : %.cpp replace.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	 rm -f $(NAME)
re: fclean all
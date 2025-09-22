CC = c++
# CFLAGS =-std=c++98

CFLAGS = -Wall -Wextra -Werror  

NAME = 	PmergeMe

CPPFILES =  main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp  PmergeMe.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
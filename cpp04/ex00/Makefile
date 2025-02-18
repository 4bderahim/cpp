CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = poly

CPPFILES = Animal.cpp Cat.cpp Dog.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp  
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
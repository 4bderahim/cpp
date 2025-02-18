CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Wrong

CPPFILES = WrongAnimal.cpp WrongCat.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp  WrongAnimal.hpp WrongCat.hpp 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
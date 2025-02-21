CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = poly

CPPFILES = AMateria.cpp ICHaracter.cpp Character.cpp Ice.cpp	Cure.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
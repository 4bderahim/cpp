CC = c++
CFLAGS =  -fsanitize=address -g -std=c++98
NAME = poly

CPPFILES =  AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp

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
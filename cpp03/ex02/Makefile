CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ScavTrap

CPPFILES = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp  main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp ScavTrap.hpp ClapTrap.hpp FragTrap.hpp 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all

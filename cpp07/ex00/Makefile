CC = c++
# CFLAGS =-std=c++98

CFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = template

CPPFILES = template.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp  template.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
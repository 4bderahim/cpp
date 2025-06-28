CC = c++
# CFLAGS =-std=c++98

CFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = easy

CPPFILES =  main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp  Span.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
CC = c++
CFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = ser

CPPFILES = Base.hpp A.cpp B.cpp C.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp Base.hpp C.hpp A.hpp B.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bure

CPPFILES = GradeTooHighException.cpp GradeTooLowException.cpp Bureaucrat.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp GradeTooLowException.hpp  GradeTooHighException.hpp  Bureaucrat.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
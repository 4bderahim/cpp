CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bure

CPPFILES = AForm.cpp GradeTooHighException.cpp GradeTooLowException.cpp Bureaucrat.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp main.cpp

OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
%.o: %.cpp GradeTooLowException.hpp  GradeTooHighException.hpp  Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
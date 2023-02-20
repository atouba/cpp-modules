NAME		=		maggots
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		main.cpp  \
					GradeTooHighException.cpp GradeTooLowException.cpp   \
					ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp \
					Bureaucrat.cpp AForm.cpp \
					Intern.cpp InvalidForm.cpp \
					Form.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

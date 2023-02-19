NAME		=		bureaucrat
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		main.cpp Bureaucrat.cpp GradeTooHighException.cpp GradeTooLowException.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

NAME		=		Sed_is_for_losers
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		main.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME) *.replace

re: fclean all

NAME		=		megaphone
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		megaphone.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

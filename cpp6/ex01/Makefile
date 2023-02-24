NAME		=		Sirialization
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		Data.cpp Serializer.cpp main.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

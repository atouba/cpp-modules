NAME		=		set_the_world_on_fire
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		A_Animal.cpp Brain.cpp Dog.cpp Cat.cpp main.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

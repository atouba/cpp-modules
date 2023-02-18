NAME		=		Animal
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp main.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

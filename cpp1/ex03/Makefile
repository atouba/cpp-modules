NAME		=		Unnecessary_violence
CC			=		c++ -std=c++98 -g
FLAGS		=		-Wall -Wextra -Werror
FILES		=		main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

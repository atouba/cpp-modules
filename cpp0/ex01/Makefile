NAME		=		my_awesome_phonebook
CC			=		c++ -std=c++98
FLAGS		=		-Wall -Wextra -Werror
FILES		=		main.cpp PhoneBook.cpp Contact.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

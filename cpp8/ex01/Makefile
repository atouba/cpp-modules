NAME		=		Span
CC			=		c++ -std=c++98
CPPFLAGS	=		-Wall -Wextra -Werror
FILES		=		Span.cpp main.cpp

OBJS		=		$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

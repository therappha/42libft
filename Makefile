
SRCS = $(wildcard srcs/*.c)

CFLAGS = -Wall -Wextra -Werror

INCLUDES = includes

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	cc main.c -L. -lft -o main.out


%.o : %.c
	cc $(CFLAGS) -I $(INCLUDES) -c $^ -o $@

clean:
	rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY = all clean fclean re

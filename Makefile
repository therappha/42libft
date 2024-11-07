# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 16:45:58 by rafaelfe          #+#    #+#              #
#    Updated: 2024/11/01 16:45:58 by rafaelfe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = .

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
#	cc main.c -L. -lft -o main.out


%.o : %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $^ -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:	fclean all

bonus: $(BONUS_OBJS) $(OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY = all clean fclean re bonus

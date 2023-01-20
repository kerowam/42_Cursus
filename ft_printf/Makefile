# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 20:51:11 by gfredes-          #+#    #+#              #
#    Updated: 2023/01/20 20:51:11 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CLEAN = rm -f

SRC = ft_printf.c
	ft_print_c.c \
	ft_print_s.c \
	ft_print_d_i.c \
	ft_print_u.c \
	ft_print_x.c \
	ft_print_upx.c \
	ft_print_p.c

CC = gcc -c

OBJT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJT)

clean:
	$(CLEAN) $(OBJT)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
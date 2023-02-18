# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 17:22:51 by gfredes-          #+#    #+#              #
#    Updated: 2023/01/09 21:04:47 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
CFLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
SRC = 		get_next_line.c \
			get_next_line_utils.c \
			main.c

SRCBONUS = 

CC = gcc -Wall -Werror -Wextra -D BUFFER_SIZE=42 
OBJT = $(SRC:.c=.o)
OBJTBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJT)

clean:
	$(CLEAN) $(OBJT) $(OBJTBONUS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

bonus:
	$(CC) $(CFLAGS) $(SRC) $(SRCBONUS)
	ar rcs $(NAME) $(OBJT) $(OBJTBONUS)

exe: all
	gcc -L. -lgetnextline main.c

.PHONY: all clean fclean re bonus exe

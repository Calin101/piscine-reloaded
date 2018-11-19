# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: calin <marvin@le-101.fr>                   +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 17:52:59 by calin        #+#   ##    ##    #+#        #
#    Updated: 2018/10/04 14:09:13 by calin       ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc -Wall -Wextra -Werror

OBJ = ft_putchar.o ft_putstr.o main.o

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/main.c

all: $(NAME)

$(NAME):
	$(CC) -c $(FILES)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

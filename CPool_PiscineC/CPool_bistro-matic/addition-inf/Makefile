##
## Makefile for emacs in /home/david.xu/CPool_infinadd
## 
## Made by david xu
## Login   <david.xu@epitech.net>
## 
## Started on  Wed Oct 26 18:05:27 2016 david xu
## Last update Wed Nov  2 09:00:21 2016 david xu
##

SRC	=	infin_add.c	\
		main.c		\
		my_putstr.c	\
		my_strlen.c	\
		my_putchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

all: $(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

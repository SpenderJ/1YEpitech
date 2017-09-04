##
## Makefile for emacs in /home/jules.spender/CPool_Day10/lib/my
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.net>
## 
## Started on  Mon Oct 17 15:27:08 2016 Jules Spender
## Last update Mon Oct 17 20:32:48 2016 Jules Spender
##

SRC	=	my_evil_str.c	\
		my_isneg.c	\
		my_print_alpha.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_swap.c	\
		my_putchar.c	\
		main.c

HEADER	=	my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

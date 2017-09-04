##
## Makefile for emacs in /home/jules/PSU_2016_my_printf
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Thu Nov 17 14:46:21 2016 Jules Spender
## Last update Fri Nov 18 14:52:33 2016 Jules Spender
##

CC		=	gcc

RC		=	ar rc

SRC		=	myprintf6.c \
			zeroboi.c \
			my_put_nbr.c \
			my_strlen.c \
			tohexamin.c \
			myprintf7.c \
			my_putstr.c \
			my_strcpy.c \
			tobinaire.c \
			tooctal.c \
			myprintf8.c \
			my_putchar.c \
			my_revstr.c \
			tohexa.c \
			my_printf.c


OBJ		=	$(SRC:.c=.o)

NAME		=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		$(RC) $(NAME) $(OBJ)
		ranlib libmy.a

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

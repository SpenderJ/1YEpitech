##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Sat Mar 18 14:45:50 2017 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= tetris

SRCS	=	src/declarestruct.c \
		src/my_strcpy.c \
		src/my_usefull_function.c \
		src/tetris_help.c \
		src/tetris_option_choose.c	\
		src/tetris_fonc.c	\
		src/tetris_fonc2.c	\
		src/my_strdup.c	\
		src/my_strncmp.c	\
		src/launch_debug.c	\
		src/my_sort_wordtab.c	\
		src/my_strcat.c		\
		src/stardisplayer.c	\
		src/error_tetriminos.c	\
		src/main.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) ./include/my_printf.a ./include/libgnl.a -lncurses

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

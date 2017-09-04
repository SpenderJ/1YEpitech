##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Sun Jun  4 22:23:55 2017 blaise carnevillier
##

CFLAGS  =       -Wall -Wextra -Iinclude

CC	= gcc

RM	= rm -f

NAME	= play

SRCS	=	src/main.c \
		src/getnextline.c \
		src/tools.c \
		src/str_to_wordtab.c \
		src/detect_end.c \
		src/print_data.c \
		src/moves.c	\
		src/info.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -lc_graph_prog_full ./includes/my_printf.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

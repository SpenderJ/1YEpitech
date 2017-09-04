##
## Makefile for lemin in /home/hecto/CPE_2016_Lemin/src
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Wed Apr 26 10:04:52 2017 blaise carnevillier
## Last update Sun Apr 30 11:05:59 2017 blaise carnevillier
##


CFLAGS  =       -Wall -Wextra -Iinclude

CC	= gcc

RM	= rm -f

NAME	= lem_in

SRCS	=	src/main.c \
		src/getnextline.c \
		src/rank.c \
		src/parsing.c \
		src/parcour.c \
		src/tell_me.c \
		src/list_op.c \
		src/list_op2.c \
		src/tool.c \
		src/tool2.c \
		src/my_str_to_wordtab.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) ./include/my_printf.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

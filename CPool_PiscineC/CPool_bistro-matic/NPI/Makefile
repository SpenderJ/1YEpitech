##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Fri Oct 28 21:47:22 2016 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= eval_expr

SRCS	= fonct.c \
	  main.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_strlen.c \
	  calculate_string.c 

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

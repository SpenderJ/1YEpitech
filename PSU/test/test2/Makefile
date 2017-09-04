##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Mon Mar 20 16:12:05 2017 Jules Spender
##

CC	= gcc

CFLAGS	= -Wall -Wextra

RM	= rm -f

NAME	= test

SRCS	=	main.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -lncurses

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

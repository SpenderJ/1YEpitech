##
## Makefile for emacs in /home/jules/CPE_2016_Pushswap/Pushswap2.0
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Thu Nov 24 03:33:15 2016 Jules Spender
## Last update Tue Feb 28 11:37:16 2017 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= mysh

SRCS	= cd.c		\
	core.c		\
	my_env_finder.c	\
	my_exit.c	\
	my_str_to_wordtab.c	\
	my_usefull_function.c	\
	main.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) ./libgnl.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY : all clean fclean re


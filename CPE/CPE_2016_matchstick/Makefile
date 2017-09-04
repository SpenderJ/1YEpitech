##
## Makefile for emacs in /home/jules/CPE/CPE_2016_matchstick
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Tue Feb 21 13:47:09 2017 Jules Spender
## Last update Sun Feb 26 17:46:34 2017 Jules Spender
##

CC      = gcc

RM      = rm -f

NAME    = matchstick

SRCS    = game.c	\
	my_displayer.c	\
	my_put_nbr.c	\
	map_generator.c	\
	my_usefull_function.c	\
	print_error.c		\
	ia_turn.c		\
	ia_turn2.c		\
	gnl.c			\
	main.c

OBJS    = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) ./libgnl.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY : all clean fclean re

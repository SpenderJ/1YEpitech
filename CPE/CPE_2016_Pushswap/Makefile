##
## Makefile for emacs in /home/jules/CPE_2016_Pushswap/Pushswap2.0
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Thu Nov 24 03:33:15 2016 Jules Spender
## Last update Fri Nov 25 20:48:39 2016 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= push_swap

SRCS	= my_pb.c	\
	my_Pushswap.c	\
	my_rra.c	\
	my_sort_int.c	\
	my_chooser.c	\
	my_ra.c		\
	my_getnbr.c	\
	main.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY : all clean fclean re


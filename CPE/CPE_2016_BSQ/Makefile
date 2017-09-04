##
## Makefile for emacs in /home/jules/CPE_2016_Pushswap/Pushswap2.0
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Thu Nov 24 03:33:15 2016 Jules Spender
## Last update Sun Dec 18 19:36:46 2016 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= bsq

SRCS	= biggest_square.c	\
	horizontal_size.c	\
	my_map_to_str.c		\
	my_printer.c		\
	only_map.c		\
	str_to_array.c		\
	vertical_size.c		\
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


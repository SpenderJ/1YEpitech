##
## Makefile for emacs in /home/jules/PSU_2016_my_ls
## 
## Made by Jules Spender
## Login   <jules.spender@epitech.eu@epitech.net>
## 
## Started on  Wed Nov 30 14:37:13 2016 Jules Spender
## Last update Wed Nov 30 14:40:53 2016 Jules Spender
##

CC	= gcc

RM	= rm -f

NAME	= my_ls

SRCS	= my_ls.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Sun Apr  2 18:52:00 2017 blaise carnevillier
##

CC	= gcc

RM	= rm -f

NAME	= scroller

SRCS	=	src/main.c \
		src/scroller_text.c \
		src/scroller_music.c	\
		src/getnextline.c	\
		src/my_strcat.c		\
		src/background.c	\
		src/sprites.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -L. -lc_graph_prog_full

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

##
## Makefile for emacs in /home/jules/TOURNAMENT/dante/depth
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Thu Apr 20 18:09:09 2017 Jules Spender
## Last update Tue May  9 14:19:01 2017 Jules Spender
##

CC	= gcc

RM	= rm -f

CFLAGS	=	-g3 -I.

NAME1	= astar/solver

SRC1	=	astar/main.c	\

NAME2	= breadth/solver

SRC2	=	breadth/others/main.c			\
		breadth/others/my_usefull_function.c	\
		breadth/others/get_next_line.c		\
		breadth/others/usefull.c		\
		breadth/breadth_search/resolve.c	\

NAME3	= depth/solver

SRC3	=	depth/others/main.c			\
		depth/others/my_usefull_function.c	\
		depth/depth_search/resolve.c		\
		depth/depth_search/depth_search.c	\
		depth/others/get_next_line.c		\

NAME4	= generator/generator

SRC4	=	generator/maze_generators/imperfect_maze.c	\
		generator/others/main.c				\
		generator/others/my_usefull_function.c		\
		generator/maze_generators/perfect_maze.c	\
		generator/maze_generators/perfect_functions.c	\

NAME5	= tournament/solver

SRC5	=	tournament/main.c	\

OBJS1	= $(SRC1:.c=.o)

OBJS2	= $(SRC2:.c=.o)

OBJS3	= $(SRC3:.c=.o)

OBJS4	= $(SRC4:.c=.o)

OBJS5	= $(SRC5:.c=.o)

all:	$(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

$(NAME1): $(OBJS1)
	$(CC) -g3 $(OBJS1) -o $(NAME1)

$(NAME2): $(OBJS2)
	$(CC) -g3 $(OBJS2) -o $(NAME2)

$(NAME3): $(OBJS3)
	$(CC) -g3 $(OBJS3) -o $(NAME3)

$(NAME4): $(OBJS4)
	$(CC) -g3 $(OBJS4) -o $(NAME4)

$(NAME5): $(OBJS5)
	$(CC) -g3 $(OBJS5) -o $(NAME5)

clean :
	$(RM) $(OBJS1) $(OBJS2) $(OBJS3) $(OBJS4) $(OBJS5)

fclean : clean
	$(RM) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

re : fclean all

.PHONY : all clean fclean re

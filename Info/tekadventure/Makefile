##
## Makefile for emacs in /home/hecto/CPool_rush2/bonus
## 
## Made by blaise carnevillier
## Login   <hecto@epitech.net>
## 
## Started on  Sat Oct 15 19:25:13 2016 blaise carnevillier
## Last update Sun May 28 22:31:03 2017 blaise carnevillier
##

CC	= gcc

RM	= rm -f

NAME	= tekadventure

SRCS	=	src/main.c		\
		src/win_create.c	\
		src/game.c		\
		src/display_scenario.c	\
		src/map.c		\
		src/map2glace.c		\
		src/move.c		\
		src/run.c		\
		src/run2.c		\
		src/hitbox2glace.c	\
		src/fleche2.c		\
		src/menu.c		\
		src/run3.c		\
		src/sign3.c		\
		src/map3.c		\
		src/final3.c		\
		src/box_hit3.c		\
		src/box_end.c		\
		src/next_sign.c		\
		src/my_strncmp.c	\
		src/run_final.c		\
		src/create.c		\
		src/background.c	\
		src/ground.c		\
		src/obstacles.c		\
		src/obstacles2.c	\
		src/collisions.c 	\
		src/map_david.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -L. -lc_graph_prog_full ./include/libgnl.a

bla :
	@printf "\033[33;5m\n=== Compilation in Re mode\t\t\t\n"

exit :
	@printf "\033[33;32m\n=== The Rules Clean And Fclean have correctly been applied\t\t\t\n"

towhite :
	@printf "\033[33;34m";

compil :
	@printf "\033[33;32m\n=== Compilation of the files beginning:\t\t\t\n\n"

success :
	@printf "\033[33;5m\n\n=== Compilation Finished, Re Mode Finished\n\n\n"

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : bla fclean exit compil towhite all success

.PHONY : bla compil all sucess fclean clean fclean bla re success exit

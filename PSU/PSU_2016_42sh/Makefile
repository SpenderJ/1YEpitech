##
## Makefile for emacs in /home/jules/PSU/PSU_2016_minishell2
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Tue Mar 21 10:52:28 2017 Jules Spender
## Last update Mon Jun  5 14:30:22 2017 Jules Spender
##

CC      = gcc

RM      = rm -f

NAME    = 42sh

SRCS    =       src/my_env_finder.c	\
		src/core.c		\
		src/my_usefull_function.c	\
		src/str_to_wordtab.c	\
		src/my_strncmp.c	\
		src/my_strcpy.c		\
		src/shrub.c		\
		src/my_strdup.c		\
		src/my_putsterr.c	\
		src/my_strcat.c		\
		src/epur.c		\
		src/my_chooser.c	\
		src/my_functions.c	\
		src/my_cd.c		\
		src/my_getnbr.c		\
		src/main.c

OBJS    = $(SRCS:.c=.o)

all:    $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) ./include/libgnl.a

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
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : bla fclean exit compil towhite all success

.PHONY : bla compil all sucess fclean clean fclean bla re success exit

##
## Makefile for emacs in /home/jules/PSU/PSU_2016_minishell2
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Tue Mar 21 10:52:28 2017 Jules Spender
## Last update Sat Apr  8 14:00:22 2017 Jules Spender
##

CC      = gcc -g3

RM      = rm -f

NAME    = mysh

SRCS    =       src/my_env_finder.c	\
		src/core.c		\
		src/my_usefull_function.c	\
		src/my_str_to_wordtab.c	\
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
	$(CC) $(OBJS) -o $(NAME) ./include/libgnl.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

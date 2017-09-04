##
## Makefile for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Thu Jun 15 10:21:21 2017 Jules Spender
## Last update Sat Jun 17 13:06:56 2017 Jules Spender
##

NAME		=	palindrome

CC		=	gcc -I include/

CFLAGS		=	-W

RM		=	rm -f

SRC		=	src/main.c		\
			src/error.c		\
			src/help_displayer.c	\
			src/my_strcat.c		\
			src/my_strncmp.c	\
			src/usefull.c		\
			src/palindrome.c	\
			src/check.c		\
			src/tobase.c		\
			src/todecimal.c

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

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
	@printf "\033[33;5m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t█ ▄▄  ██   █    ▄█    ▄   ██▄   █▄▄▄▄ ████▄ █▀▄▀█ ▄███▄   \n\t\t\t\t\t\t\t\t\t\t\t\t█   █ █ █  █    ██     █  █  █  █  ▄▀ █   █ █ █ █ █▀   ▀  \n\t\t\t\t\t\t\t\t\t\t\t\t█▀▀▀  █▄▄█ █    ██ ██   █ █   █ █▀▀▌  █   █ █ ▄ █ ██▄▄    \n\t\t\t\t\t\t\t\t\t\t\t\t█     █  █ ███▄ ▐█ █ █  █ █  █  █  █  ▀████ █   █ █▄   ▄▀ \n\t\t\t\t\t\t\t\t\t\t\t\t █       █     ▀ ▐ █  █ █ ███▀    █            █  ▀███▀   \n\t\t\t\t\t\t\t\t\t\t\t\t  ▀     █          █   ██        ▀            ▀           \n\t\t\t\t\t\t\t\t\t\t\t\t       ▀                                                  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCopyright Jules Spender 2017\n"

clean:
	@$(RM) $(OBJ)

fclean:		clean
	@$(RM) $(NAME)

re:		bla fclean exit compil towhite all success

.PHONY:		bla compil all sucess fclean clean fclean bla re success exit

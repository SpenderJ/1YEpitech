##
## Makefile for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Thu Jun 15 10:21:21 2017 Jules Spender
## Last update Mon Jun 19 22:48:47 2017 Jules Spender
##

NAME		=	FASTAtools

CC		=	gcc -I include/

CFLAGS		=	-g3

RM		=	rm -f

SRC		=	src/main.c		\
			src/error.c		\
			src/usefull.c		\
			src/help_displayer.c	\
			src/my_strcat.c		\
			src/my_strncmp.c	\
			src/get_next_line.c	\
			src/my_opener.c		\
			src/option_1.c		\
			src/option_2.c		\
			src/option_3.c		\
			src/option_4.c		\
			src/option_5.c		\
			src/option_6.c		\
			src/option_7.c		\
			src/needed.c		\
			src/fill_tab.c		\
			src/my_sort_wordtab.c	\
			src/amino_1.c		\
			src/amino_2.c		\
			src/amino_3.c		\
			src/amino_4.c		\
			src/amino_5.c		\
			src/amino_6.c	

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

clean:
	@$(RM) $(OBJ)

fclean:		clean
	@$(RM) $(NAME)

re:		bla fclean exit compil towhite all success

.PHONY:		bla compil all sucess fclean clean fclean bla re success exit

##
## Makefile for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser
## 
## Made by Jules Spender
## Login   <louis.chegaray@epitech.eu@epitech.net>
## 
## Started on  Mon Jun 12 14:37:18 2017 Jules Spender
## Last update Sun Jun 18 17:11:39 2017 Jules Spender
##

CC		=	gcc -I include/

CFLAGS		=	-Wextra -W -Wall

RM		=	rm -f

SRC		=	src/main.c		\
			src/help_displayer.c	\
			src/open.c		\
			src/sbml_parser.c	\
			src/str_to_wordtab.c	\
			src/usefull.c		\
			src/str_to_tab.c	\
			src/print_tags.c	\
			src/print_ref.c		\
			src/compartements.c	\
			src/product.c		\
			src/reac.c		\
			src/species.c		\
			src/launch_i.c		\
			src/my_strncmp.c	\
			src/my_strcat.c		\
			src/print_e_reac.c	\
			src/free.c

OBJ		=	$(SRC:.c=.o)

NAME		=	SBMLparser

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
	@printf "\033[33;5m\n\n=== Compilation Finished, Re Mode Finished\n\n\n   ██████  ▄▄▄▄    ███▄ ▄███▓ ██▓        ██▓███   ▄▄▄       ██▀███    ██████ ▓█████  ██▀███  \n▒██    ▒ ▓█████▄ ▓██▒▀█▀ ██▒▓██▒       ▓██░  ██▒▒████▄    ▓██ ▒ ██▒▒██    ▒ ▓█   ▀ ▓██ ▒ ██▒\n░ ▓██▄   ▒██▒ ▄██▓██    ▓██░▒██░       ▓██░ ██▓▒▒██  ▀█▄  ▓██ ░▄█ ▒░ ▓██▄   ▒███   ▓██ ░▄█ ▒\n  ▒   ██▒▒██░█▀  ▒██    ▒██ ▒██░       ▒██▄█▓▒ ▒░██▄▄▄▄██ ▒██▀▀█▄    ▒   ██▒▒▓█  ▄ ▒██▀▀█▄  \n▒██████▒▒░▓█  ▀█▓▒██▒   ░██▒░██████▒   ▒██▒ ░  ░ ▓█   ▓██▒░██▓ ▒██▒▒██████▒▒░▒████▒░██▓ ▒██▒\n▒ ▒▓▒ ▒ ░░▒▓███▀▒░ ▒░   ░  ░░ ▒░▓  ░   ▒▓▒░ ░  ░ ▒▒   ▓▒█░░ ▒▓ ░▒▓░▒ ▒▓▒ ▒ ░░░ ▒░ ░░ ▒▓ ░▒▓░\n░ ░▒  ░ ░▒░▒   ░ ░  ░      ░░ ░ ▒  ░   ░▒ ░       ▒   ▒▒ ░  ░▒ ░ ▒░░ ░▒  ░ ░ ░ ░  ░  ░▒ ░ ▒░\n░  ░  ░   ░    ░ ░      ░     ░ ░      ░░         ░   ▒     ░░   ░ ░  ░  ░     ░     ░░   ░ \n      ░   ░             ░       ░  ░                  ░  ░   ░           ░     ░  ░   ░     \n               ░                                                                            "


clean:
	@$(RM) $(OBJ)

fclean:		clean
	@$(RM) $(NAME)

re:		bla fclean exit compil towhite all success

.PHONY:		bla compil all sucess fclean clean fclean bla re success exit

##
## Makefile for Makefile in /home/sacha.riperto/B-CPE/CPE_2016_b2rush1_off
## 
## Made by Sacha Riperto
## Login   <sacha.riperto@epitech.net>
## 
## Started on  Sat Mar  4 10:23:59 2017 Sacha Riperto
## Last update Sat Mar  4 15:34:12 2017 Sacha Riperto
##

CC		=	gcc -I include/

CFLAGS		=	-Wall -Wextra -g3

RM		=	rm -f

SRC_ARC		=	src_my_archive/my_archive.c \
			src_my_archive/tools.c \
			src_my_archive/get_next_line.c

OBJ_ARC		=	$(SRC_ARC:.c=.o)

NAME_ARC	=	my_archive

SRC_UNA		=	src_my_unarchive/my_unarchive.c \
			src_my_unarchive/tools.c \
			src_my_unarchive/get_next_line.c

OBJ_UNA		=	$(SRC_UNA:.c=.o)

NAME_UNA	=	my_unarchive

all:		$(NAME_ARC) $(NAME_UNA)

$(NAME_ARC):		$(OBJ_ARC)
		$(CC) $(CFLAGS) $(OBJ_ARC) -o $(NAME_ARC)

$(NAME_UNA):		$(OBJ_UNA)
		$(CC) $(CFLAGS) $(OBJ_UNA) -o $(NAME_UNA)

clean:
	$(RM) $(OBJ_ARC) $(OBJ_UNA)

fclean:		clean
	$(RM) $(NAME_ARC) $(NAME_UNA)

re:		fclean all

.PHONY:		all clean fclean re

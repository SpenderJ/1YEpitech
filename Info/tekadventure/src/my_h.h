
/*
** my_h.h for scroller in /home/hecto/Rush_Scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 17:02:31 2017 blaise carnevillier
** Last update Sun May 28 21:53:04 2017 blaise carnevillier
*/

#ifndef MY_H_
# define MY_H_

# ifndef NB_BUILTINS
#  define NB_BUILTINS 5
# endif

# ifndef READ_SIZE
#  define READ_SIZE 1024 
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../include/include/SFML/Graphics.h"
# include "../include/include/SFML/System.h"
# include "../include/include/SFML/Graphics/Texture.h"
# include "../include/include/SFML/Audio.h"
#include "gnl.h"

int		move_me(sfRenderWindow *win, int *x, int *y, int lvl);
int		my_strncmp(char *s1, char *s2, int d);
int		my_strcmp(char *s1, char *s2);
int		open_conf_file(char *str);
int		menu(sfRenderWindow *win);
int		go_to_mouse(sfRenderWindow *win, sfEvent event, int *x, int *y);
int		print_background(sfTexture *texture, sfRenderWindow *win);
int		run_up(sfRenderWindow *win, char *png, int x, int y);
int		run_down(sfRenderWindow *win, char *png, int x, int y);
int		run_right(sfRenderWindow *win, char *png, int x, int y);
int		run_left(sfRenderWindow *win, char *png, int x, int y);
sfIntRect	getface(int *pos);
int		launch_png(sfRenderWindow *win, int *pos, int x, int y);
int		get_move(sfRenderWindow *win, int *x, int *y);
int		start_game(sfRenderWindow *win, int argc, char **argv);
int		map1(sfRenderWindow *win, int *room);
int		map2(sfRenderWindow *win, int *room);
int		map3(sfRenderWindow *win, int *room);
int		map4(sfRenderWindow *win, int *room);
int		map5(sfRenderWindow *win, int *room);
int		get_click(sfRenderWindow *win);
int		launch_box(sfRenderWindow *win, char *png, char *text);
sfTexture	*launch_background(sfRenderWindow *win, char *str);
sfRenderWindow	*create_win(char*, int, int);
int		launch_game(sfRenderWindow *win, int argc, char **argv);
int		main(int argc, char **argv);
sfMusic		*launch_music(char *str);
int		display_scenario(sfRenderWindow *win);

#endif /* !My_H_H */

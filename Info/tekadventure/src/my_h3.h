/*
** my_h.h for scroller in /home/hecto/Rush_Scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 17:02:31 2017 blaise carnevillier
** Last update Sun May 28 19:23:49 2017 david xu
*/

#ifndef MY_H_
# define MY_H_

# ifndef NB_BUILTINS
#  define NB_BUILTINS 1
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

typedef struct	s_cobble
{
  int		x;
  int		y;
  float		t;
  float		e;
  float		k;
}		t_cobble;

sfSprite        *create_sprite3(char *filename);
int		up_box(int x, int y);
int		down_box(int x, int y);
int		right_box(int x, int y);
int		left_box(int x, int y);
int		up_boxend(int x, int y);
int		left_boxend(int x, int y);
int		right_boxend(int x, int y);
int		down_boxend(int x, int y);
int		print_background(sfTexture *texture, sfRenderWindow *win);
int		run_up3(sfRenderWindow *win, char *png, t_cobble *enigme);
int		up_end(sfRenderWindow *win, char *png, t_cobble *enigme);
int		down_end(sfRenderWindow *win, char *png, t_cobble *enigme);
int		right_end(sfRenderWindow *win, char *png, t_cobble *enigme);
int		left_end(sfRenderWindow *win, char *png, t_cobble *enigme);
int		run_down3(sfRenderWindow *win, char *png, t_cobble *enigme);
int		run_right3(sfRenderWindow *win, char *png, t_cobble *enigme);
int		run_left3(sfRenderWindow *win, char *png, t_cobble *enigme);
sfIntRect	getface(int *pos);
int		launch_png(sfRenderWindow *win, int *pos, int x, int y);
int		get_move(sfRenderWindow *win, t_cobble *);
int		start_game(sfRenderWindow *win, t_cobble *enigme);
int		launch_box(sfRenderWindow *win, char *png, char *text);
sfTexture	*launch_background(sfRenderWindow *win, char *str);
sfRenderWindow	*create_win(char*, int, int);
int		launch_game(sfRenderWindow *win, t_cobble *enigme);
int		main(int argc, char **argv);
sfMusic		*launch_music(char *str);
int		display_scenario(sfRenderWindow *win);
int             click_sign3(sfRenderWindow *win, t_cobble *enigme);
int             final_enigme(sfRenderWindow *win, t_cobble *enigme);
int		click(sfRenderWindow *win, t_cobble *enigme);
int             sign3(sfRenderWindow *win, t_cobble *enigme);

#endif /* !My_H_H */

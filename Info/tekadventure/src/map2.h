/*
** map2.h for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Fri May 26 02:32:56 2017 blaise carnevillier
** Last update Sat May 27 14:50:11 2017 blaise carnevillier
*/

#include"my_h.h"

typedef struct	s_player
{
  int	x;
  int	y;
  int	f;
  int	*pos;
}		t_player;

int             run_up2(sfRenderWindow *win, char *png, t_player *p,  sfTexture *tex);
int             run_down2(sfRenderWindow *win, char *png, t_player *p, sfTexture *tex);
int             run_right2(sfRenderWindow *win, char *png, t_player *p, sfTexture *tex);
int             run_left2(sfRenderWindow *win, char *png, t_player *p,  sfTexture *tex);
int             launch_png2(sfRenderWindow *win, int *pos, int x, int y);
int             fleche(sfRenderWindow*, t_player*, int *);
int		hit_box_up2(int, int);
int		hit_box_down2(int, int);
int		hit_box_left2(int, int);
int		hit_box_right2(int, int);

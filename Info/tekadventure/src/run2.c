/*
** run2.c for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Thu May 25 21:17:47 2017 blaise carnevillier
** Last update Fri May 26 13:37:46 2017 blaise carnevillier
*/

#include "my_h.h"
#include "map2.h"

int     run_up2(sfRenderWindow *win, char *png, t_player *p,  sfTexture *tex)
{
  if (hit_box_up2(p->x, p->y))
    return (0);
  p->y = p->y - 1;
  p->pos[0] = 0;
  p->pos[1] = 0;
  usleep(1666);
  print_background(tex, win);
  if ((launch_png2(win, p->pos, p->x, p->y + 1)) == 84)
    return (84);
  return (1);
}

int     run_down2(sfRenderWindow *win, char *png, t_player *p, sfTexture *tex)
{
  if (hit_box_down2(p->x, p->y))
    return (0);
  p->y = p->y + 1;
  p->pos[0] = 0;
  p->pos[1] = 0;
  usleep(1666);
  print_background(tex, win);
  launch_png2(win, p->pos, p->x, p->y - 1);
  return (1);
}

int     run_left2(sfRenderWindow *win, char *png,t_player *p, sfTexture *tex)
{
  if (hit_box_left2(p->x - 1, p->y))
    return (0);
  p->x = p->x - 1;
  p->pos[0] = 0;
  p->pos[1] = 0;
  usleep(1666);
  print_background(tex, win);
  launch_png2(win, p->pos, p->x + 1, p->y);
  return (1);
}

int     run_right2(sfRenderWindow *win, char *png, t_player *p, sfTexture *tex)
{
  if (hit_box_right2(p->x, p->y))
    return (0);
  p->x = p->x + 1;
  p->pos[0] = 0;
  p->pos[1] = 0;
  usleep(1666);
  print_background(tex, win);
  launch_png2(win, p->pos, p->x - 1, p->y);
  return (1);
}

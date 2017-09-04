/*
** run.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 21:59:02 2017 Jules Spender
** Last update Sun May 28 19:03:12 2017 david xu
*/

#include "my_h3.h"

int	run_up3(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int	*pos;

  if (up_box(enigme->x, enigme->y + 10) == 1)
    return (0);
  enigme->y = enigme->y - 10;
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  enigme->y = enigme->y - 10;
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y + 10)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y + 20)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y + 30)) == 84)
    return (84);
  return (0);
}

int	run_down3(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int	*pos;

  if (down_box(enigme->x, enigme->y - 10) == 1)
    return (0);
  enigme->y = enigme->y + 10;
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  enigme->y = enigme->y + 10;
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y - 10)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y - 20)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x, enigme->y - 30)) == 84)
    return (84);
  return (0);
}

int	run_right3(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int	*pos;

  if (right_box(enigme->x + 8, enigme->y) == 1)
    return (0);
  enigme->x = enigme->x + 8;
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  enigme->x = enigme->x + 8;
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x + 8, enigme->y)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x + 15, enigme->y)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x + 21, enigme->y)) == 84)
    return (84);
  return (0);
}

int	run_left3(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int	*pos;

  if (left_box(enigme->x - 8, enigme->y) == 1)
    return (0);
  enigme->x = enigme->x - 8;
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  enigme->x = enigme->x - 8;
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x - 8, enigme->y)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x - 15, enigme->y)) == 84)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((launch_png(win, pos, enigme->x - 21, enigme->y)) == 84)
    return (84);
  return (0);
}

/*
** run_final.c for emacs in /home/david.xu/tekadventure/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sun May 28 19:02:38 2017 david xu
** Last update Sun May 28 21:13:09 2017 blaise carnevillier
*/

#include "my_h3.h"

int     up_end(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int   *pos;

  if (up_boxend(enigme->x, enigme->y + 10) == 2)
      return (2);
  if (up_boxend(enigme->x, enigme->y + 10) == 1)
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

int     down_end(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int   *pos;

  if (down_boxend(enigme->x, enigme->y - 10) == 1)
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

int     right_end(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int   *pos;

  if (right_boxend(enigme->x + 8, enigme->y) == 1)
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

int     left_end(sfRenderWindow *win, char *png, t_cobble *enigme)
{
  int   *pos;

  if (left_boxend(enigme->x - 8, enigme->y) == 1)
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

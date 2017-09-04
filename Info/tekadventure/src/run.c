/*
** run.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 21:59:02 2017 Jules Spender
** Last update Sun May 28 23:32:19 2017 Jules Spender
*/

#include "my_h.h"

int	run_up(sfRenderWindow *win, char *png, int x, int y)
{
  int		*pos;
  sfTexture*    texture;

  if (y < 30)
    return (-84);
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  texture = launch_background(win, "textures/grotte_map0.png");
  y = y + 30;
  pos[0] = 0;
  pos[1] = 3;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y - 10);
  usleep(100000);
  pos[1] = 4;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y - 20);
  usleep(100000);
  pos[1] = 5;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y - 30);
  usleep(100000);
  return (0);
}

int	run_down(sfRenderWindow *win, char *png, int x, int y)
{
  int		*pos;
  sfTexture*    texture;

  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  texture = launch_background(win, "textures/grotte_map0.png");
  y = y - 30;
  pos[0] = 0;
  pos[1] = 0;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y + 10);
  usleep(100000);
  pos[1] = 1;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y + 20);
  usleep(100000);
  pos[1] = 2;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x, y + 30);
  usleep(100000);
  return (0);
}

int	run_right(sfRenderWindow *win, char *png, int x, int y)
{
  int	*pos;
  sfTexture*    texture;

  if (x > 770)
    return (-2);
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  texture = launch_background(win, "textures/grotte_map0.png");
  x = x - 30;
  pos[0] = 0;
  pos[1] = 8;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x + 10, y);
  usleep(100000);
  pos[1] = 7;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x + 20, y);
  usleep(100000);
  pos[1] = 6;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x + 30, y);
  usleep(100000);
  return (0);
}

int     run_left(sfRenderWindow *win, char *png, int x, int y)
{
  int   *pos;
  sfTexture*    texture;

  if (x < 0)
    return (-1);
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  texture = launch_background(win, "textures/grotte_map0.png");
  x = x + 30;
  pos[0] = 0;
  pos[1] = 6;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x - 10, y);
  usleep(100000);
  pos[1] = 7;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x - 20, y);
  usleep(100000);
  pos[1] = 8;
  sfRenderWindow_clear(win, sfBlack);
  print_background(texture, win);
  launch_png(win, pos, x - 30, y);
  usleep(100000);
  return (0);
}

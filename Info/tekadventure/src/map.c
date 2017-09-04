/*
** map.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 17:17:39 2017 Jules Spender
** Last update Sun May 28 23:32:00 2017 Jules Spender
*/

#include "my_h.h"

int	map1(sfRenderWindow *win, int *lvl)
{
  int		x;
  int		y;
  sfMusic*	music;
  int		*pos;
  sfTexture*	texture;

  x = 413;
  y = 392;
  if ((pos = malloc(sizeof(int) * 3)) == NULL)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((music = launch_music("music/gngEndTheme.ogg")) == NULL ||\
      (texture = launch_background(win, "textures/grotte_map0.png")) == NULL)
    return (84);
  while (42)
    {
      print_background(texture, win);
      launch_png(win, pos, x, y);
      if ((pos[2] = move_me(win, &x, &y, *lvl)) != 0)
	return (pos[2]);
    }
  return (84);
}

int	move_me(sfRenderWindow *win, int *x, int *y, int lvl)
{
  int	ret;

  ret = get_move(win, x, y);
  if (ret == -1 && lvl >= 0)
    return (1);
  else if (ret == -1)
    *x = 0;
  if (ret == -2 && lvl >= 1)
    return (2);
  else if (ret == -2)
    *x = 770;
  else if (ret == -84 && lvl >= 2)
    return (3);
  else if (ret == -84)
    *y = 30;
  return (0);
}

/*
** game.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon May 15 14:05:07 2017 Jules Spender 372
** Last update Sun May 28 23:47:55 2017 Jules Spender
*/

#include "my_h.h"

int	launch_game(sfRenderWindow *win, int argc, char **argv)
{
  int	i;

  i = 0;
  if ((i = display_scenario(win)) == 84)
    return (84);
  if ((i = start_game(win, argc, argv)) == 84)
    return (84);
  return (0);
}

int        (*tab[NB_BUILTINS])(sfRenderWindow *, int *) = {map1,
							   map2,
							   map3,
							   map4};

int	start_game(sfRenderWindow *win, int argc, char **argv)
{
  int	room;
  int	res;
  int	lvl;

  if (argc == 1)
    lvl = 0;
  else
    lvl = open_conf_file(argv[1]);
  res = 0;
  while (res != -1 && res != 84)
    res = tab[res](win, &lvl);
  return (res);
}

int	open_conf_file(char *str)
{
  int	fd;
  char	*s;

  if ((fd = open(str, O_RDONLY)) == -1)
    return (0);
  while ((s = get_next_line(fd)) && s[0] == '#');
  if (s)
    {
      if ((my_strncmp(s, "Level:0", 7)) == 0)
	return (0);
      if ((my_strncmp(s, "Level:1", 7)) == 0)
	return (1);
      if ((my_strncmp(s, "Level:2", 7)) == 0)
	return (2);
      if ((my_strncmp(s, "Level:3", 7)) == 0)
	return (3);
    }
  return (0);
}

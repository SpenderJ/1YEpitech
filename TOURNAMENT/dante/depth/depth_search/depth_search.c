/*
** depth_search.c for emacs in /home/jules/TOURNAMENT/dante/generator
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Apr 20 17:07:00 2017 Jules Spender
** Last update Mon Apr 24 13:27:19 2017 Jules Spender
*/

#include "depth/include/my_h.h"

int	depth_xsup(char **array, int x, int y, int *stat)
{
  int	i;

  array[y][x + 1] = 'A';
  i = depth_search(array, x + 1, y, stat);
  if (i != 12)
    i = 84;
  else
    array[y][x + 1] = 'o';
  return (i);
}

int	depth_xless(char **array, int x, int y, int *stat)
{
  int	i;

  array[y][x - 1] = 'A';
  i = depth_search(array, x - 1, y, stat);
  if (i != 12)
    i = 84;
  else
    array[y][x - 1] = 'o';
  return (i);
}

int	depth_ysup(char **array, int x, int y, int *stat)
{
  int	i;

  array[y + 1][x] = 'A';
  i = depth_search(array, x, y + 1, stat);
  if (i != 12)
    i = 84;
  else
    array[y + 1][x] = 'o';
  return (i);
}

int	depth_yless(char **array, int x, int y, int *stat)
{
  int	i;

  array[y - 1][x] = 'A';
  i = depth_search(array, x, y - 1, stat);
  if (i != 12)
    i = 84;
  else
    array[y - 1][x] = 'o';
  return (i);
}

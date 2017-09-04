/*
** resolve.c for emacs in /home/jules/TOURNAMENT/dante/generator
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Apr 19 10:52:19 2017 Jules Spender
** Last update Mon Apr 24 13:27:32 2017 Jules Spender
*/

#include "depth/include/my_h.h"

int	resolve(char **arr)
{
  int	i;
  int	x;
  int	*limit;
  int	y;
  int	a;

  i = -1;
  a = -1;
  x = 0;
  y = 0;
  limit = malloc(sizeof(int) * 3);
  while (arr[++a] != NULL);
  a = a - 1;
  while (arr[a][++i] != '\0');
  i = i - 1;
  limit[0] = i;
  limit[1] = a;
  a = 0;
  depth_search(arr, 0, 0, limit);
  free (limit);
  arr[0][0] = 'o';
  arr = clean_map(arr);
  printtab(arr);
  return (0);
}

char	**clean_map(char **map)
{
  int	i;
  int	n;

  n = 0;
  i = 0;
  while (map[n] != NULL)
    {
      while (map[n][i] != '\0')
	{
	  if (map[n][i] == 'A')
	    map[n][i] = '*';
	  i = i + 1;
	}
      i = 0;
      n = n + 1;
    }
  return (map);
}

int	depth_search(char **array, int x, int y, int *stat)
{
  int	i;

  i = 0;
  while (x != stat[0] || y != stat[1])
    {
      if (x != stat[0] && array[y][x + 1] == '*' && i != 12)
	i = depth_xsup(array, x, y, stat);
      if (x != 0 && array[y][x - 1] == '*' && i != 12)
	i = depth_xless(array, x, y, stat);
      if (y != stat[1] && array[y + 1][x] == '*' && i != 12)
	i = depth_ysup(array, x, y, stat);
      if (y != 0 && array[y - 1][x] == '*' && i != 12)
	i = depth_yless(array, x, y, stat);
      if (i == 12)
	return (12);
      if (i != 84)
	return (1);
      i = 0;
    }
  if (x == stat[0] && y == stat[1])
    return (12);
  return (0);
}
  
int	printtab(char **map)
{
  int	i;

  i = 0;
  while (map[i] != NULL)
    {
      my_putstr(map[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}

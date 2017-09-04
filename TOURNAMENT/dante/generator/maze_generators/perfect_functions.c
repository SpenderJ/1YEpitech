/*
** perfect_functions.c for emacs in /home/jules/TOURNAMENT/dante/generator/maze_generators
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr 28 11:42:50 2017 Jules Spender
** Last update Fri May 12 15:48:22 2017 Jules Spender
*/

#include "generator/include/my_h.h"

char	**change_map(char **map, int col, int larg)
{
  int	i;

  i = 0;
  while (map[col][i] != '\n' && map[col][i] != '\0')
    i = i + 1;
  map[col][larg] = '*';
  if (map[col] != NULL && map[col + 1] != NULL && map[col + 2] != NULL\
      && map[col + 2][larg] == 'O')
    map[col + 1][larg] = '*';
  if (larg + 2 < i && map[col][larg + 2] == 'O')
    map[col][larg + 1] = '*';
  return (map);
}

char	**generate_liaison(char **map)
{
  int	x;
  int	y;

  x = 1;
  y = 1;
  while (map[++y] != NULL && map[y][x] != 'X');
  if (map[y] != NULL)
    map[y][x] = '*';
  y = 1;
  x = 1;
  while (map[y][++x] != '\0' && map[y][x] != 'X');
  if (map[y][x] != '\0')
    map[y][x] = '*';
  return (map);
}

void	free_map(char **map)
{
  int	i;

  i = -1;
  while (map[++i] != NULL)
    free(map[i]);
  free(map);
}

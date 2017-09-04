/*
** map_generator.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 11:18:45 2017 Jules Spender
** Last update Tue Apr  4 15:41:13 2017 Jules Spender
*/

#include "my_h.h"

char	**map_generator(int line)
{
  int	i;
  int	nbr;
  int	array;
  char	**map;

  i = 0;
  nbr = line;
  array = 1;
  while (nbr > 1)
    {
      array = array + 2;
      nbr = nbr - 1;
    }
  if ((map = malloc(sizeof(char*) * line)) == NULL)
    return (NULL);
  while (i < line)
    {
      if ((map[i] = malloc(sizeof(char) * (array + 2))) == NULL)
	return (NULL);
      i = i + 1;
    }
  map = map_creator(map, line - 1, array - 1, line - 1);
  return (map);
}

char	**map_creator(char **map, int line, int size, int fin)
{
  int	i;
  int	recul;

  i = 0;
  recul = 0;
  while (line >= 0)
    {
      while (i <= size)
	{
	  if (i < recul || i > size - recul)
	    map[line][i] = ' ';
	  else
	    map[line][i] = '|';
	  i = i + 1;
	}
      map[line][i] = '\0';
      i = 0;
      recul = recul + 1;
      line = line - 1;
    }
  map[fin][size] = '|';
  return (map);
}

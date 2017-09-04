/*
** imperfect_maze.c for emacs in /home/jules/TOURNAMENT/dante/generator
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Apr 18 13:31:31 2017 Jules Spender
** Last update Mon Apr 24 18:23:33 2017 Jules Spender
*/

#include "generator/include/my_h.h"

int	imperfect_maze(int larg, int col)
{
  int	i;
  int	a;
  char	**map;

  i = -1;
  map = malloc(sizeof(char*) * (col + 5));
  while ((++i) < col)
    {
      a = 0;
      map[i] = malloc(sizeof(char) * (larg + 5));
      while (a < larg)
	map[i][a++] = '*';
      map[i][a] = '\0';
    }
  map[i] = NULL;
  map = generate_x(larg * col, map);
  map = generate_sol(larg - 1, col - 1, map);
  map = generate_sol(larg - 1, col - 1, map);
  map = generate_sol(larg - 1, col - 1, map);
  printmap(map);
  i = -1;
  while (map[++i] != NULL)
    free(map[i]);
  free(map);
  return (0);
}

int	printmap(char **map)
{
  int	i;

  i = -1;
  while (map[++i] != NULL)
    {
      my_putstr(map[i]);
      if (map[i + 1] != NULL)
	my_putchar('\n');
    }
  return (0);
}

char	**generate_sol(int larg, int col, char **map)
{
  int	posX;
  int	posY;
  int	num;

  posX = 0;
  posY = 0;
  while (posY != col || posX != larg)
    {
      map[posY][posX] = '*';
      if (posY != col && posX != larg)
	{
	  num = rand();
	  num = num % 2;
	  if (num == 0)
	    ++posX;
	  else
	    ++posY;
	}
      else if (posY == col)
	++posX;
      else if (posX == larg)
	++posY;
    }
  map[posY][posX] = '*';
  return (map);
}

char	**generate_x(int num, char **map)
{
  int	a;
  int	c;

  a = 0;
  c = 0;
  while (map[a] != NULL)
    {
      if (map[a][c] == '\0')
	{
	  ++a;
	  c = 0;
	}
      else
	{
	  num = rand();
	  if ((num % 3) == 0 || (num % 2) == 0 || (num % 7) == 0)
	    map[a][c] = 'X';
	  ++c;
	}
    }
  return (map);
}

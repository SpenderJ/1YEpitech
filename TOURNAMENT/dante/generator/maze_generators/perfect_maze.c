/*
** perfect_maze.c for emacs in /home/jules/TOURNAMENT/dante/generator
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Apr 18 15:53:36 2017 Jules Spender
** Last update Fri May 12 14:12:43 2017 Jules Spender
*/

#include "generator/include/my_h.h"

int	perfect_maze(int larg, int col)
{
  int	i;
  int   a;
  char  **map;

  i = 0;
  map = malloc(sizeof(char*) * (col + 5));
  while (i < col)
    {
      a = 0;
      map[i] = malloc(sizeof(char) * (larg + 5));
      while (a < larg)
	map[i][a++] = 'X';
      map[i][a] = '\0';
      i = i + 1;
    }
  map[i] = NULL;
  genperfect_sol(larg, col, map);
  map = be_perfect(larg - 1, col - 1, map);
  map = gennew_sol(map, 0, 0);
  map = generate_liaison(map);
  printmap(map);
  free_map(map);
  return (0);
}

char	**gennew_sol(char **map, int larg, int col)
{
  int	i;

  i = 0;
  while (map[col] != NULL)
    {
      while (map[col][larg] != '\0')
	{
	  if (map[col][larg] == 'O')
	    change_map(map, col, larg);
	  larg = larg + 1;
	}
      larg = 0;
      col = col + 1;
    }
  return (map);
}

char    **genperfect_sol(int larg, int col, char **map)
{
  int   posX;
  int   posY;
  int	i;

  i = 0;
  posX = 0;
  posY = 0;
  while (map[posY] != NULL)
    {
      while (map[posY][posX] != '\0')
	{
	  if (posY != 0 && posY <= col && posX != 0 && posX <= larg && map \
	      [posY - 1][posX] == 'X' && map[posY][posX - 1] == 'X'\
	      && map[posY][posX] == 'X' && (map[posY - 1][posX + 1]	\
					    == 'X' || map[posY - 1][posX + 1] == '\0') \
	      && map[posY - 1][posX - 1] == 'X')
	    map[posY][posX] = 'O';
	  posX = posX + 1;
	}
      posX = 0;
      posY = posY + 1;
    }
  return (map);
}

char	**be_perfect(int larg, int col, char **map)
{
  int	posX;
  int	posY;
  int	num;

  posX = 0;
  posY = 0;
  num = rand();
  map[posY][posX] = '*';
  map[col][larg] = '*';
  if (num % 2 == 0)
    map[posY++][++posX] = '*';
  else
    map[++posY][posX++] = '*';
  while (posX < larg - 2 || posY < col - 1)
    gettonode(map, &posY, &posX);
  map[posY][posX + 1] = '*';
  map[posY][posX] = '*';
  return (map);
}

int	gettonode(char **map, int *posY, int *posX)
{
  int	num;
  int	maxX;

  maxX = my_strlen(map[0]) - 1;
  num = (rand()%2) + 1;
  if (num == 1 && *posX < maxX - 2 && map[*posY][*posX + 1] != 'O')
    {
      map[*posY][*posX] = '*';
      while (*posX < maxX && map[*posY][++*posX] != 'O')
	map[*posY][*posX] = '*';
    }
  else if (num == 2 && map[*posY] != NULL && map[*posY + 1] != NULL &&\
	   map[*posY + 2] != NULL && map[*posY + 1][*posX] != 'O')
    {
      map[*posY][*posX] = '*';
      while (map[++*posY] != NULL && map[*posY][*posX] != 'O')
	map[*posY][*posX] = '*';
    }
  return(0);
}


/*
** resolve.c for emacs in /home/jules/TOURNAMENT/dante/breadth/breadth_search
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Apr 24 17:15:48 2017 Jules Spender
** Last update Fri May 12 22:12:55 2017 Jules Spender
*/

#include "breadth/include/my_h.h"

int	resolve(char **arr)
{
  int	col;
  int	larg;
  int	i;
  int	**tab;

  i = -1;
  col = my_strlen(arr[0]) - 1;
  while (arr[++i] != NULL);
  larg = i - 1;
  tab = malloc(sizeof(int *) * (col + 1));
  i = -1;
  while (++i <= col)
      tab[i] = malloc(sizeof(int) * (larg + 1));
  tab[i] = NULL;
  breadth_search(arr, tab, larg, col);
  return (0);
}

int	breadth_search(char **arr, int **tab, int larg, int col)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  set_tab(arr, tab, larg, col);
  edit_tab(tab, larg, col);
  i = 0;
  while (i <= col)
    {
      while (a <= larg)
	{
	  printf(" %d", tab[i][a]);
	  a = a + 1;
	}
      printf("\n");
      a = 0;
      i = i + 1;
    }
  return (0);
}

void	edit_tab(int **tab, int larg, int col)
{
  int	x;
  int	y;
  int	i;

  i = 1;
  x = 0;
  y = 0;
  tab[x][y] = 2;
  while (y < col)
    {
      while (x < larg)
	{
	  if (y + 1 < col && tab[y + 1][x] == 1 && tab[y][x] != 1 && tab[y][x] != 0)
	    {
	      tab[y + 1][x] = tab[y][x] + 1;
	    }
	  if (y - 1 > 0  && tab[y - 1][x] == 1 && tab[y][x] != 1 && tab[y][x] != 0)
	    {
	      tab[y - 1][x] = tab[y][x] + 1;
	    }
	  if (x + 1 < larg && tab[y][x + 1] == 1 && tab[y][x] != 1 && tab[y][x] != 0)
	    {
	      tab[y][x + 1] = tab[y][x] + 1;
	    }
	  if (x - 1 > 0 && tab[y][x - 1] == 1 && tab[y][x] != 1 && tab[y][x] != 0)
	    {
	      tab[y][x - 1] = tab[y][x] + 1;
	    }
	  x = x + 1;
	}
      x = 0;
      y = y + 1;
    }
}

void	set_tab(char **arr, int **tab, int larg, int col)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y <= col)
    {
      while (x <= larg)
	{
	  if (arr[y][x] == '*')
	    tab[y][x] = 1;
	  else
	    tab[y][x] = 0;
	  x = x + 1;
	}
      x = 0;
      y = y + 1;
    }
}

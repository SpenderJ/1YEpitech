/*
** fun_play.c for tetris in /home/hecto/PSU_2016_tetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed Mar 15 14:58:52 2017 blaise carnevillier
** Last update Sun Mar 19 14:57:44 2017 blaise carnevillier
*/

#include "my_h.h"

char	**get_moves(char **t_tab, char **tab)
{
  int	i;
  int	y;
  char	**old;

  i = 0;
  while (tab[i] != NULL)
    {
      y = 0;
      while (tab[i][y] != '\0')
	{
	  if (t_tab[i][y] == 'O')
	    tab[i][y] = '.';
	  if (t_tab[i][y] == '*')
	    tab[i][y] = '*';
	  y++;
	}
      i++;
    }
  return (tab);
}

char    **put_tetriminos(char **t_tab, char **next, char **tab, t_info *info)
{
  int   i;
  int   j;
  int   x;
  int   y;

  i = 0;
  while (next[0][i++] != '\0');
  j = (info->mapsizecol / 2) - (i / 2);
  i = 0;
  while (next[i] != NULL)
    {
      x = j;
      y = 0;
      while (next[i][y] != '\0')
	{
	  if (tab[i][x] == '*')
	    end_game(info);
	  if (next[i][y] == '*')
	    t_tab[i][x++] = next[i][y++];
	  else if (next[i][y] == ' ')
	    t_tab[i][x++] = next[i][y++] + 14;
	  else
	    t_tab[i][x++] = next[i][y++];
	}
      i++;
    }
  return (t_tab);
}


char    **cpy_tab(char **tab, t_info *info)
{
  int   i;
  int   y;
  char  **t_tab;

  if(!(t_tab = malloc(sizeof(char*) * info->mapsizerow)))
    exit(84);
  i = 0;
  y = 0;
  while (tab[i] != NULL)
    {
      if(!(t_tab[i] = malloc(sizeof(char*) * info->mapsizerow)))
	exit(84);
      y = 0;
      while (tab[i][y] != '\0')
	t_tab[i][y] = tab[i][y++];
      i++;
    }
  return (t_tab);
}


char    **choose_nxt(char ***mc, int i, int y, int x)
{
  char **next;

  while (mc[i++] != NULL);
  srand((unsigned)time(NULL));
  i = rand() % (i - 2);
  while (mc[i][y++] != NULL);
  if (!(next = malloc(sizeof(char*) * y)))
    exit(84);
  while (mc[i][x] != NULL)
    {
      y = 0;
      if (!(next[x] = malloc(sizeof(char) * 100)))
	exit (84);
      while (mc[i][x][y] != '\0')
	next[x][y] = mc[i][x][y++];
      x++;
    }
  return (next);
}

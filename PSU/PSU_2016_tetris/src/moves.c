/*
** moves.c for tetris in /home/hecto/PSU_2016_devtetris
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sun Mar 19 19:23:54 2017 blaise carnevillier
** Last update Tue Mar 21 10:59:35 2017 blaise carnevillier
*/


#include "my_h.h"

char	**move_left(char **t_tab, char **old, char **tab, t_info *info)
{
  int	i;
  int	y;

  y = 0;
  while (y < info->mapsizecol)
    {
      i = 0;
      while (i < info->mapsizerow)
	{
	  if (old[i][y] == '*' && y == 0)
	    return (old);
	  if (old[i][y] == '*' && y != 0)
	    {
	      if (tab[i][y - 1] != '*' || tab)
		{
		  t_tab[i][y] = 'O';
		  t_tab[i][y - 1] = '*';
		}
	      
	      else
		return (old);
	    }
	  i++;
	}
      y++;
    }
  return (t_tab);
}

char	**move_right(char **t_tab, char **old, char **tab, t_info *info)
{
  int	i;
  int	y;

  y = info->mapsizecol - 1;
  while (y >= 0)
    {
      i = info->mapsizerow - 1;
      while (i >= 0)
	{
	  if (old[i][y] == '*' && y == info->mapsizecol - 1)
	    return (old);
	  if (old[i][y] == '*' && t_tab[i][y + 1] != '\0')
	    {
	      if (tab[i][y + 1] != '*' || t_tab[i][y + 1] == 'O')
		{
		  t_tab[i][y] = 'O';
		  t_tab[i][y + 1] = '*';
		}
	      else 
		return (old);
	    }
	  i--;
	}
      y--;
    }
  return (t_tab);
}

char    **t_tab_down(char **t_tab, char **old,char **tab, t_info *info)
{
  int   i;
  int   y;

  i = info->mapsizerow;
  while (--i >= 0)
    {
      y =  info->mapsizecol;
      while (--y >= 0)
	{
	  if (old[i][y] == '*' && t_tab[i + 1] == NULL)
	    return (NULL);
	  if (old[i][y] == '*' && t_tab[i + 1] != NULL)
	    {
	      if (tab[i+1][y] != '*' || t_tab[i+1][y] == 'O')
		{
		  t_tab[i][y] = 'O';
		  t_tab[i + 1][y] = '*';
		}
	      else
		return (NULL);
	    }
	}
    }
  return (t_tab);
}
/*
** my_sort_wordtab.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Mar  6 15:47:25 2017 Jules Spender
** Last update Fri Mar 17 15:07:21 2017 Jules Spender
*/

#include "my_h.h"

void	my_swap(char **src, int i)
{
  char	*temp;

  temp = src[i];
  src[i] = src[i + 1];
  src[i + 1] = temp;
}

char	**my_sort_wordtab(char **tab, int i, int a)
{
  if (i == 0 && tab[i + 1] == NULL)
    return (tab);
  while (tab[i + 1] != NULL)
    {
      if (tab[i][a] < tab[i + 1][a])
	{
	  i = i + 1;
	  a = 0;
	}
      else if (tab[i][a] > tab[i + 1][a])
	{
	  a = 0;
	  my_swap(tab, i);
	  i = 0;
	}
      else if (tab[i][a] == tab[i + 1][a])
	a = a + 1;
    }
  modif_char(tab);
  return (tab);
}

char	**modif_char(char **tab)
{
  int	i;
  int	n;
  int	decalage;

  decalage = 0;
  n = 0;
  i = 0;
  while (tab[i] != NULL)
    {
      while (tab[i][n] != '\0')
	n = n + 1;
      n = n - 10;
      if (my_strcpy(&tab[i][n], ".tetrimino") != 0)
	{
	  while (tab[i + 1] != NULL)
	    {
	      tab[i] = tab[i + 1];
	      i = i + 1;
	    }
	  tab[i] = NULL;
	}
      else
	i = i + 1;
    }
  return (tab);
}

char	*modif_name(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '.')
    a = a + 1;
  str[a] = '\0';
  return (str);
}

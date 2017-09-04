/*
** my_sort_wordtab.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 11:08:45 2017 Jules Spender
** Last update Tue Jun 20 02:49:52 2017 Jules Spender
*/

#include "my_h.h"

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
  return (tab);
}

void	my_swap(char **src, int i)
{
  char  *temp;

  temp = src[i];
  src[i] = src[i + 1];
  src[i + 1] = temp;
}

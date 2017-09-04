/*
** str_to_wordtab.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 13:58:17 2017 Jules Spender
** Last update Mon Jun 12 16:54:08 2017 Jules Spender
*/

#include "my_h.h"

char    **my_strtowordtab_synthesis(char *str)
{
  int   i;
  int   n;
  int   c;
  char  **tab;

  i = 0;
  n = 0;
  if ((tab = malloc(sizeof(char *) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (str[i] != '\0' && str != NULL)
    {
      if ((tab[n] = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      c = 0;
      while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||\
				(str[i] >= 'a' && str[i] <= 'z') ||\
				(str[i] >= 'A' && str[i] <= 'Z')))
	tab[n][c++] = str[i++];
      if (c != 0)
	tab[n++][c] = '\0';
      if (str[i] != '\0')
	++i;
    }
  tab[n] = NULL;
  return (tab);
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
  return (tab);
}

void    my_swap(char **src, int i)
{
  char  *temp;

  temp = src[i];
  src[i] = src[i + 1];
  src[i + 1] = temp;
}

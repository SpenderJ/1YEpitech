/*
** requirement.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 09:40:06 2017 Jules Spender
** Last update Mon Jun 12 13:51:20 2017 Jules Spender
*/

#include "stdlib.h"

int     my_strlen(char *str);

char	**my_strtowordtab_synthesis(char *str)
{
  int	i;
  int	n;
  int	c;
  char	**tab;

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

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str != NULL)
    {
      while (str[i] != '\0')
	i = i + 1;
    }
  return (i);
}

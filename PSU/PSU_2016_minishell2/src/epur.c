/*
** epur.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 14:20:17 2017 Jules Spender
** Last update Fri Apr  7 14:23:44 2017 Jules Spender
*/

#include "my_h.h"

char	**epur(char **tab)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][a] == ' ')
	{
	  while (tab[i][a] == ' ')
	    a = a + 1;
	}
      tab[i] = my_strdup(&tab[i][a]);
      a = 0;
      i = i + 1;
    }
  return (tab);
}

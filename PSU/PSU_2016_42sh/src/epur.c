/*
** epur.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 14:20:17 2017 Jules Spender
** Last update Sun May 21 17:20:09 2017 blaise carnevillier
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
  tab = check_tab(tab);
  tab = clear_tab(tab);
  return (tab);
}

char	**clear_tab(char **tab)
{
  int	i;
  int	a;

  i = 0;
  while (tab[i] != NULL)
    {
      a = -1;
      while (tab[i][++a] != '\0');
      a = a - 1;
      if (tab[i][a] == ' ' || tab[i][a] == '\t')
	tab[i][a] = '\0';
      i = i + 1;
    }
  return (tab);
}

char	**check_tab(char **tab)
{
  int	i;
  int	a;
  int	con;
  char	*truetab;

  i = 0;
  while (tab[i] != NULL)
    {
      truetab = malloc(sizeof(char) * (strlen(tab[i])));
      a = 0;
      con = 0;
      while (tab[i][a] != '\0')
	{
	  if ((tab[i][a] == ' ' || tab[i][a] == '\t'))
	    a = a + 1;
	  else
	    truetab[con++] = tab[i][a++];
	  if ((tab[i][a - 1] == ' ' || tab[i][a - 1] == '\t') &&\
	      (tab[i][a] != ' ' && tab[i][a] != '\t'))
	    truetab[con++] = ' ';
	}
      truetab[con] = '\0';
      tab[i++] = truetab;
    }
  return (tab);
}

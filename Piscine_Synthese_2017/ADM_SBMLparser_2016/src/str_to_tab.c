/*
** str_to_tab.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 14:57:42 2017 Jules Spender
** Last update Wed Jun 14 08:39:27 2017 Jules Spender
*/

#include "my_h.h"

char	**str_to_tab(char *str)
{
  char	**newtab;
  int	a;
  int	i;
  int	c;

  i = 0;
  a = 0;
  c = col_number(str);
  newtab = malloc(sizeof(char *) * (c + 30));
  c = 0;
  newtab[a] = malloc(sizeof(char) * ((next_return(str)) + 30));
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	{
	  newtab[a][c] = '\0';
	  newtab[++a] = malloc(sizeof(char) * ((next_return(&str[i++])) + 50));
	  c = 0;
	}
      else
	newtab[a][c++] = str[i++];
    }
  newtab[a] = NULL;
  clear_tab(newtab);
  return (newtab);
}

void	clear_tab(char **tab)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (tab[i] != NULL)
    {
      while (tab[i][a] != '\0' && tab[i][a] != '\n')
	{
	  if (tab[i][a] == '\0' || tab[i][a] == '\n')
	    tab[i][a] = '\0';
	  a = a + 1;
	}
      a = 0;
      i = i + 1;
    }
}

int	next_return(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    ++i;
  i = i + 1000;
  return (i);
}

int	col_number(char *str)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i] != '\0')
    {
      if (str[i++] == '\n')
	c = c + 1;
    }
  return (c);
}

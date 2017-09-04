/*
** my_str_to_wordtab.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Sun Jan 22 18:27:14 2017 Jules Spender
** Last update Wed May 31 23:05:45 2017 blaise carnevillier
*/

#include "../includes/n4s.h"

int	my_countword(char *str, char car)
{
  int	i;
  int	n;

  i = 0;
  n = 1;
  while (str[i] != '\0' && str[i] != '\n')
    {
      if (str[i] == car && str[i + 1] != '\0')
	n = n + 1;
      i = i + 1;
    }
  return (n);
}

int	my_countchar(char *str, char car)
{
  int	c;

  c = 0;
  while ((str[c] != car) && (str[c] != '\0') && (str[c] != '\n'))
    c = c + 1;
  c += 1;
  return (c);
}

char	**my_str_to_wordtab(char *str, char car, int b)
{
  char	**tab;
  int	i;
  int	a;

  i = 0;
  a = 0;
  tab = malloc(sizeof(*tab) * ((my_countword(str, car) + 1)));
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] == car || str[i] == '\n')
	{
	  while (str[i] == car && str[i] != '\0')
	    i = i + 1;
	  a = a + 1;
	  b = 0;
	}
      tab[a] = malloc(sizeof(**tab) * ((my_countchar(str + i, car) + 1)));
      while ((str[i] != car)  && (str[i] != '\n') && (str[i] != '\0'))
	tab[a][b++] = str[i++];
      tab[a][b] = '\0';
    }
  tab[a + 1] = 0;
  if (tab[0] == NULL)
    return (NULL);
  return (tab);
}

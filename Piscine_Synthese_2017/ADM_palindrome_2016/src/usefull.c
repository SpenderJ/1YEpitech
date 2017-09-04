/*
** usefull.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:29:32 2017 Jules Spender
** Last update Mon Jun 19 19:08:12 2017 Jules Spender
*/

#include "my_h.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] != '\0' && s1[i] != '\n')
    {
      if (s1[i] != s2[i])
	return (-1);
      ++i;
    }
  if (s2[i] != '\0' && s1[i] != '\n')
    return (-1);
  else
    return (0);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != '\0' && str[i] != '\n')
    my_putchar(str[i++]);
  return (0);
}

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  if (str != NULL)
    {
      while (str[i] != '\0')
	i = i + 1;
    }
  return (i);
}

void	printtab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
    }
}

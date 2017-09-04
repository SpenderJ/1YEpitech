/*
** my_strcat.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 18:52:31 2017 Jules Spender
** Last update Thu Jun 15 14:32:17 2017 Jules Spender
*/

#include "my_h.h"

char	*my_strcat(char *s1, char *s2)
{
  int   i;
  int   a;
  char	*str;

  i = 0;
  a = 0;
  if ((str = malloc(sizeof(char) * (i + 200))) == NULL)
    return (NULL);
  while (s1[a] != '\0' && s1[a] != '\n')
    {
      str[a] = s1[a];
      ++a;
    }
  while (s2[i] != '\0')
    {
      str[a + i] = s2[i];
      ++i;
    }
  str[a + i] = '\0';
  return (str);
}

char	*my_revstr(char *str)
{
  int	i;
  char	*s;
  int	a;

  i = 0;
  a = -1;
  while (str[i] != '\0')
    ++i;
  s = malloc(sizeof(char) * (i + 1));
  while (i >= 0)
    s[++a] = str[--i];
  s[a] = '\0';
  return (s);
}

/*
** amino_5.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:44:44 2017 Jules Spender
** Last update Tue Jun 20 11:11:20 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_x(char *str)
{
  char	*s;
  int	i;
  int	n;

  i = -1;
  n = 0;
  while (str[++i] != '\0')
    if (str[i] == 'N')
      n = 1;
  if (n == 0)
    return (NULL);
  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  s[0] = 'X';
  s[1] = '\0';
  return (s);
}

char	*amino_v(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "GTT") != 0 && strcmp(str, "GTC") != 0\
      && strcmp(str, "GTA") != 0 && strcmp(str, "GTG") != 0)
    return (NULL);
  s[0] = 'V';
  s[1] = '\0';
  return (s);
}

char	*amino_w(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TGG") != 0)
    return (NULL);
  s[0] = 'W';
  s[1] = '\0';
  return (s);
}

/*
** amino_2.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:42:17 2017 Jules Spender
** Last update Tue Jun 20 11:08:22 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_f(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TTT") != 0 && strcmp(str, "TTC") != 0)
    return (NULL);
  s[0] = 'F';
  s[1] = '\0';
  return (s);
}

char	*amino_g(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "GGT") != 0 && strcmp(str, "GGC") != 0 &&\
      strcmp(str, "GGA") != 0 && strcmp(str, "GGG") != 0)
    return (NULL);
  s[0] = 'G';
  s[1] = '\0';
  return (s);
}

char	*amino_h(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "CAT") != 0 && strcmp(str, "CAC") != 0)
    return (NULL);
  s[0] = 'H';
  s[1] = '\0';
  return (s);
}

char	*amino_i(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "ATT") != 0 && strcmp(str, "ATC") != 0 &&\
      strcmp(str, "ATA") != 0)
    return (NULL);
  s[0] = 'I';
  s[1] = '\0';
  return (s);
}

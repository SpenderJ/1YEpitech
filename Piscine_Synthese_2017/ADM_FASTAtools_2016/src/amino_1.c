/*
** amino_1.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:41:11 2017 Jules Spender
** Last update Tue Jun 20 11:07:24 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_a(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 3)) == NULL)
    return (NULL);
  if (strcmp(str, "GCT") != 0 && strcmp(str, "GCC") != 0 &&\
      strcmp(str, "GCA") != 0 && strcmp(str, "GCG") != 0)
    return (NULL);
  s[0] = 'A';
  s[1] = '\0';
  return (s);
}

char	*amino_c(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TGT") != 0 && strcmp(str, "TGC") != 0)
    return (NULL);
  s[0] = 'C';
  s[1] = '\0';
  return (s);
}

char	*amino_d(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "GAT") != 0 && strcmp(str, "GAC") != 0)
    return (NULL);
  s[0] = 'D';
  s[1] = '\0';
  return (s);
}

char	*amino_e(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "GAA") != 0 && strcmp(str, "GAG") != 0)
    return (NULL);
  s[0] = 'E';
  s[1] = '\0';
  return (s);
}

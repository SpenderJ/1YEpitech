/*
** amino_4.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:44:01 2017 Jules Spender
** Last update Tue Jun 20 11:10:29 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_p(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "CCT") != 0 && strcmp(str, "CCC") != 0 &&\
      strcmp(str, "CCA") != 0 && strcmp(str, "CCG") != 0)
    return (NULL);
  s[0] = 'P';
  s[1] = '\0';
  return (s);
}

char	*amino_q(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "CAA") != 0 && strcmp(str, "CAG") != 0)
    return (NULL);
  s[0] = 'Q';
  s[1] = '\0';
  return (s);
}

char	*amino_r(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "AGA") != 0 && strcmp(str, "AGG") != 0 &&\
      strcmp(str, "CGT") != 0 && strcmp(str, "CGC") != 0 &&\
      strcmp(str, "CGA") != 0 && strcmp(str, "CGG") != 0)
    return (NULL);
  s[0] = 'R';
  s[1] = '\0';
  return (s);
}

char	*amino_s(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TCT") != 0 && strcmp(str, "TCC") != 0 &&\
      strcmp(str, "TCA") != 0 && strcmp(str, "TCG") != 0 &&\
      strcmp(str, "AGT") != 0 && strcmp(str, "AGC") != 0)
    return (NULL);
  s[0] = 'S';
  s[1] = '\0';
  return (s);
}

char	*amino_t(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "ACT") != 0 && strcmp(str, "ACC") != 0 &&\
      strcmp(str, "ACA") != 0 && strcmp(str, "ACG") != 0)
    return (NULL);
  s[0] = 'T';
  s[1] = '\0';
  return (s);
}

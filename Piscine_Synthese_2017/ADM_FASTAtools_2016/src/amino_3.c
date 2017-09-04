/*
** amino_3.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:42:59 2017 Jules Spender
** Last update Tue Jun 20 11:09:19 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_k(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "AAA") != 0 && strcmp(str, "AAG") != 0)
    return (NULL);
  s[0] = 'K';
  s[1] = '\0';
  return (s);
}

char	*amino_l(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TTA") != 0 && strcmp(str, "TTG") != 0 &&\
      strcmp(str, "CTT") != 0 && strcmp(str, "CTC") != 0 &&\
      strcmp(str, "CTA") != 0 && strcmp(str, "CTG") != 0)
    return (NULL);
  s[0] = 'L';
  s[1] = '\0';
  return (s);
}

char	*amino_m(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "ATG") != 0)
    return (NULL);
  s[0] = 'M';
  s[1] = '\0';
  return (s);
}

char	*amino_n(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "AAT") != 0 && strcmp(str, "AAC") != 0)
    return (NULL);
  s[0] = 'N';
  s[1] = '\0';
  return (s);
}

/*
** amino_6.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 19 13:45:42 2017 Jules Spender
** Last update Tue Jun 20 11:11:36 2017 Jules Spender
*/

#include "my_h.h"

char	*amino_y(char *str)
{
  char	*s;

  if ((s = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  if (strcmp(str, "TAT") != 0 && strcmp(str, "TAC") != 0)
    return (NULL);
  s[0] = 'Y';
  s[1] = '\0';
  return (s);
}

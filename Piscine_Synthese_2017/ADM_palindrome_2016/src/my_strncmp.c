/*
** my_strncmp.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_SBMLparser_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue Jun 13 11:28:32 2017 Jules Spender
** Last update Tue Jun 13 11:32:48 2017 Jules Spender
*/

#include "my_h.h"

int     my_strncmp(char *dest, char *src, int l)
{
  int   a;

  a = 0;
  if (src == NULL || dest == NULL)
    return (1);
  while (src[a] != '\0' && dest != '\0' && a < l)
    {
      if (dest[a] == src[a])
	a = a + 1;
      else
	return (1);
    }
  return (0);
}

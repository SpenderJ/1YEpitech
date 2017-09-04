/*
** my_strncmp.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Mar  2 16:44:30 2017 Jules Spender
** Last update Fri May 19 12:00:31 2017 Jules Spender
*/

#include "my_h.h"

int     my_strncmp(char *dest, char *src, int l)
{
  int   a;

  a = 0;
  while (src[a] != '\0' && a < l)
    {
      if (dest[a] == src[a])
	a = a + 1;
      else
	return (ERROR);
    }
  return (SUCCESS);
}

int	my_strcmp(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      if (dest[a] == src[a])
	a = a + 1;
      else
	return (ERROR);
    }
  if (dest[a] != src[a])
    return (ERROR);
  return (SUCCESS);
}

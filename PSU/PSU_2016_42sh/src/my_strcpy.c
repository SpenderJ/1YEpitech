/*
** my_strcpy.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 07:56:21 2016 Jules Spender
** Last update Wed Mar 15 18:01:08 2017 Jules Spender
*/

#include "my_h.h"

int	my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      if (dest[a] == src[a])
	a = a + 1;
      else
	return (-1);
    }
  if (dest[a] == '\0')
    return (SUCCESS);
  else
    return (ERROR);
}

/*
** my_strcat.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 16:52:29 2016 Jules Spender
** Last update Sat Apr  8 15:42:53 2017 Jules Spender
*/

#include "my_h.h"

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	a;

  a = 100;
  i = 100;
  str = malloc(sizeof(char) * (i + 10) * (a + 10));
  a = 0;
  i = -1;
  if (src != NULL)
    {
      while (src[++i] != '\0')
	{
	  str[a] = src[i];
	  a = a + 1;
	}
    }
  i = -1;
  while (dest[++i] != '\0')
    {
      str[a] = dest[i];
      a = a + 1;
    }
  str[a + 1] = '\0';
  return (str);
}

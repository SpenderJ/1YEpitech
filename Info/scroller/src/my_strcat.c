/*
** my_strcat.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 16:52:29 2016 Jules Spender
** Last update Sun Apr  2 17:51:41 2017 Jules Spender
*/

#include "my_h.h"

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	a;

  i = 0;
  a = 0;
  str = malloc(sizeof(char) * ((strlen(dest)) * (strlen(src))));
  while (src[i] != '\0')
    {
      str[a] = src[i];
      i = i + 1;
      a = a + 1;
    }
  i = 0;
  while (dest[i] != '\0')
    {
      str[a] = dest[i];
      i = i + 1;
      a = a + 1;
    }
  str[a + i] = '\0';
  return (str);
}

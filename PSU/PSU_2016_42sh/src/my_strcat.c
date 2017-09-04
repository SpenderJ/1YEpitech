/*
** my_strcat.c for emacs in /home/jules.spender/CPool_Day07
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 16:52:29 2016 Jules Spender
** Last update Wed May 17 17:28:14 2017 Jules Spender
*/

#include "my_h.h"

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	a;

  a = 0;
  i = -1;
  if ((str = malloc(sizeof(char) * (110) * (110))) == NULL)
    return (NULL);
  if (src == NULL && dest == NULL)
    return (NULL);
  if (src != NULL)
    while (src[++i] != '\0')
      str[a++] = src[i];
  i = -1;
  if (dest != NULL)
    while (dest[++i] != '\0')
      str[a++] = dest[i];
  if (str)
    str[a + 1] = '\0';
  return (str);
}

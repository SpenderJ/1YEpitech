/*
** my_strdup.c for emacs in /home/jules.spender/CPool_Day08/task01
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 08:36:44 2016 Jules Spender
** Last update Wed Apr  5 14:12:11 2017 Jules Spender
*/

#include "my_h.h"

char	*my_strdup(char *src)
{
  int	a;
  char	*str;
  int	i;

  a = 0;
  i = 0;
  while (src[a] != '\0')
    a = a + 1;
  a = a + 1;
  if ((str = malloc(sizeof(char) * ((a + 1) * (a + 1)))) == NULL)
    return (NULL);
  while (src[i] != '\0')
    {
      str[i] = src[i];
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}

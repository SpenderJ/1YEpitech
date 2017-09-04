/*
** my_revstr.c for emacs in /home/jules.spender/CPool_Day06
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Tue Oct 11 09:05:11 2016 Jules Spender
** Last update Tue Nov 15 16:16:17 2016 Jules Spender
*/

#include <stdlib.h>

int	my_strlen();

char	*my_revstr(char *str)
{
  char	*res;
  int	a;
  int	i;

  a = 0;
  i = 0;
  res = malloc(sizeof(char) * my_strlen(str));
  while (str[a] != '\0')
      a = a + 1;
  while (a != 0)
    {
      res[i] = str[a];
      a = a - 1;
      i = i + 1;
    }
  return (res);
}

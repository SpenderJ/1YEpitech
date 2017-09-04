/*
** tobase.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Sun Nov  6 17:54:15 2016 Jules Spender
** Last update Fri Jun 16 14:01:36 2017 Jules Spender
*/

#include "my_h.h"

char	*tobase(char *str, int base)
{
  int	i;
  int	a;
  char	*res;

  a = 0;
  i = atoi(str);
  res = malloc(sizeof(char) * ((strlen(str) + 10) * (strlen(str) + 10)));
  while (i >= base)
    {
      res[a] = (i % base) + 48;
      i = i / base;
      ++a;
    }
  res[a] = (i % base) + 48;
  res[++a] = '\0';
  return (my_revstr(res));
}

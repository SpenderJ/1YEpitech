/*
** todecimal.c for emacs in /home/Jules.Spender/CPool_bistro-matic/Baseur
** 
** Made by Jules Spender
** Login   <Jules.Spender@epitech.net>
** 
** Started on  Fri Nov  4 11:11:40 2016 Jules Spender
** Last update Fri Jun 16 12:58:55 2017 Jules Spender
*/

#include "my_h.h"

int	tod(char *str, int base)
{
  int	i;
  int	res;

  i = 0;
  res = 0;
  while (str[i] != '\0')
    {
      res = res + str[i] - 48;
      if (str[i + 1] != '\0')
	res = res * base;
      ++i;
    }
  return (res);
}

/*
** tooctal.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:39:05 2016 Jules Spender
** Last update Thu Nov 17 18:22:35 2016 Jules Spender
*/

#include <stdlib.h>

char    *tooctal(int nbr)
{
  char  *str;
  int   i;
  int   n;

  n = 0;
  i = 1;
  while (i <= nbr)
    {
      i *= 8;
      n = n + 1;
    }
  i = n - 1;
  str = malloc(sizeof(char) * i);
  while (nbr >= 8)
    {
      str[i] = (nbr % 8) + 48;
      nbr = nbr / 8;
      i = i - 1;
    }
  str[i] = nbr + 48;
  return (str);
}

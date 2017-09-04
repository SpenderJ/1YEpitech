/*
** tohexa.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:37:44 2016 Jules Spender
** Last update Thu Nov 17 18:21:54 2016 Jules Spender
*/

#include <stdlib.h>

char    *tohexa(int nbr)
{
  char  *str;
  int   i;
  int   n;

  n = 0;
  i = 1;
  while (i <= nbr)
    {
      i *= 16;
      n = n + 1;
    }
  i = n - 1;
  str = malloc(sizeof(char) * i);
  while (nbr >= 16)
    {
      if (nbr % 16 >= 10 && nbr % 16 <= 15)
	str[i] = 'A' + ((nbr % 16) - 10);
      else
	str[i] = (nbr % 16) + 48;
      nbr = nbr / 16;
      i = i - 1;
    }
  str[i] = nbr + 48;
  return (str);
}

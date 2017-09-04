/*
** my_displayer.c for emacs in /home/jules/CPE/CPE_2016_matchstick
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:17:48 2017 Jules Spender
** Last update Tue Apr  4 15:50:30 2017 Jules Spender
*/

#include "my_h.h"

int	my_displayer(char **map, int size, int n)
{
  int	i;

  i = (size * 2);
  while (i >= 0)
    {
      i = i - 1;
      my_putchar('*');
    }
  my_putchar('\n');
  while (n <= size - 1)
    {
      i = 0;
      my_putchar('*');
      my_putstr(map[n]);
      my_putstr("*\n");
      n = n + 1;
    }
  i = (size * 2);
  while (i >= 0)
    {
      i = i - 1;
      my_putchar('*');
    }
  my_putstr("\n");
  return (0);
}

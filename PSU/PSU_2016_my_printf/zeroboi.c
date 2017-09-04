/*
** zeroboi.c for emacs in /home/jules/PSU_2016_my_printf
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:39:43 2016 Jules Spender
** Last update Thu Nov 17 18:23:42 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c);

void    zeroboi(char b)
{
  if (b <= 9)
    {
      my_putchar('0');
      my_putchar('0');
    }
  else if (b <= 99)
    my_putchar('0');
}

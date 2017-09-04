/*
** my_putstr.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:36:43 2016 Jules Spender
** Last update Thu Nov  3 17:17:58 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	toerau;

  toerau = 0;
  while (str[toerau])
    {
      my_putchar(str[toerau]);
      toerau++;
    }
  return (0);
}

      

/*
** my_putstr.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:36:43 2016 Jules Spender
** Last update Fri Nov 18 14:23:17 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      write(1, "(null)", 6);
      return (1);
    }
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

      

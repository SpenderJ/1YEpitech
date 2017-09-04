/*
** my_putstr.c for emacs in /home/jules.spender/CPool_Day04
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Thu Oct  6 12:36:43 2016 Jules Spender
** Last update Sun Nov  6 15:31:58 2016 Jules Spender
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

      

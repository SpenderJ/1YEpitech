/*
** my_usefull_function.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Jan 19 09:31:20 2017 Jules Spender
** Last update Tue May 16 11:53:23 2017 david xu
*/

#include "my_h.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (SUCCESS);
}

/*
** my_putsterr.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 23:27:03 2017 Jules Spender
** Last update Fri Apr  7 23:29:04 2017 Jules Spender
*/

#include "my_h.h"

void	my_pucherr(char c)
{
  write(2, &c, 1);
}

int	my_putsterr(char *str, int value)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_pucherr(str[i]);
      i = i + 1;
    }
  return (value);
}

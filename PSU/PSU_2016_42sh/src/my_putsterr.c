/*
** my_putsterr.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Apr  7 23:27:03 2017 Jules Spender
** Last update Fri May 19 11:18:23 2017 Jules Spender
*/

#include "my_h.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  return (i);
}

int	my_putsterr(char *str2, char *str, int value)
{
  write(2, str2, my_strlen(str2));
  write(2, str, my_strlen(str));
  return (value);
}

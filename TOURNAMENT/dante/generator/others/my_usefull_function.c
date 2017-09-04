/*
** my_usefull_function.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Jan 19 09:31:20 2017 Jules Spender
** Last update Mon Apr 24 13:31:07 2017 Jules Spender
*/

#include "generator/include/my_h.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str)
    while (str[i] != '\0' && str[i] != '\n')
      i = i + 1;
  return (i);
}

int     my_getnbr(char *str)
{
  int   i;
  int   u;
  int   nbr;

  i = 0;
  u = 0;
  nbr = 0;
  if (str == NULL)
    return (-30071998);
  while (str[i] >= '0' && str[i] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr + (str[i] - 48);
      i = i + 1;
    }
  return (nbr);
}

int	my_puterr(char *str, int ret)
{
  int	i;

  i = 0;
  i = my_strlen(str);
  write(2, str, i);
  return (ret);
}

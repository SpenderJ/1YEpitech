/*
** my_usefull_function.c for emacs in /home/jules/TOURNAMENT/dante/breadth/others
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Apr 24 17:08:59 2017 Jules Spender
** Last update Mon Apr 24 17:09:01 2017 Jules Spender
*/

#include "breadth/include/my_h.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  if (str)
    write(1, str, my_strlen(str));
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str)
    while (str[i] != '\0')
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

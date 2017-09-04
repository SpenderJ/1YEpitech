/*
** my_getnbr.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sat Apr  8 14:46:25 2017 Jules Spender
** Last update Sat Apr  8 14:52:05 2017 Jules Spender
*/

#include "my_h.h"

int     my_getnbr(char *str)
{
  int   i;
  int   u;
  int   nbr;

  i = -1;
  u = 0;
  nbr = 0;
  if (str == NULL)
    return (-30071998);
  while (str[++i] != '\0')
    if ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
      return (-30071998);
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr + (str[i] - 48);
      i = i + 1;
    }
  return (nbr);
}

/*
** functions.c for n4s in /home/hecto/Need4Stek/srcs
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Tue May 30 23:57:42 2017 blaise carnevillier
** Last update Sun Jun  4 15:25:08 2017 Jules Spender
*/

#include <unistd.h>
#include "../includes/n4s.h"

void    printfloat(float nbr)
{
  int   b;
  int   i;

  b = 0;
  if (nbr < 0)
    {
      write(1, "-", 1);
      nbr = nbr * -1;
    }
  i = (int)nbr;
  my_put_nbr(i);
  nbr = nbr - i;
  write(1, ".", 1);
  if (nbr < 0)
    nbr *= -1;
  nbr = nbr * 10;
  while (nbr != 0 && b < 3)
    {
      b++;
      i = (int)nbr;
      my_put_nbr(i);
      nbr = nbr - i;
      nbr = nbr * 10;
    }
  write(1, "\n", 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i += 1;
  return (i);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i += 1;
  return (s1[i] - s2[i]);
}

int	is_in(char *str, char *str1)
{
  int	i;
  int	y;
  int	x;

  i = 0;
  while (str[i] != 0)
    {
      y = 0;
      x = i;
      while (str[x] == str1[y] && str[x] != 0 && str1[y] != 0)
	{
	  y++;
	  x++;
	}
      if (str1[y - 1] == 0)
	return (1);
      i++;
    }
  return (0);
}

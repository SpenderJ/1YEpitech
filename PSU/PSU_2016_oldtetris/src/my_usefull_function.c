/*
** my_usefull_function.c for emacs in /home/jules/PSU/PSU_2016_minishell1
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Jan 19 09:31:20 2017 Jules Spender
** Last update Wed Mar  8 10:31:27 2017 blaise carnevillier
*/

#include "my_h.h"

/*void	my_putchar(char c)
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
  return (0);
}
*/
int	my_strlen(char *str)
{
  int	i;

  i = 0;
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

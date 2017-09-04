/*
** vertical_size.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 12:08:47 2016 Jules Spender
** Last update Sun Dec 18 19:47:32 2016 Jules Spender
*/

#include <stdlib.h>
#include "include/my.h"

int	vertical_size(char *str)
{
  char	*to_atoi;
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != '\n')
    i = i + 1;
  to_atoi = malloc(sizeof(char) * (i + 1));
  while (a < i)
    {
      to_atoi[a] = str[a];
      a = a + 1;
    }
  to_atoi[a] = '\0';
  i = my_atoi(to_atoi);
  free (to_atoi);
  return (i);
}

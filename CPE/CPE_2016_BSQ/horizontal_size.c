/*
** horizontal_size.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 17:18:12 2016 Jules Spender
** Last update Sun Dec 18 19:11:47 2016 Jules Spender
*/

#include <stdlib.h>

int	horizontal_size(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n')
    i = i + 1;
  free (str);
  return (i);
}

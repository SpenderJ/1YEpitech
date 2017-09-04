/*
** detect_end.c for n4s in /home/hecto/Need4Stek
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed May 31 00:01:45 2017 blaise carnevillier
** Last update Sun Jun  4 15:25:33 2017 Jules Spender
*/

#include <string.h>
#include <stdlib.h>
#include "../includes/n4s.h"

int	finished(char *str)
{
  int	i;
  int	j;
  char	*new;

  if ((new = malloc(sizeof(char *) * strlen(str))) == NULL)
    return (-1);
  i = strlen(str);
  j = 0;
  while ( j < 2 && --i != 0)
    if (str[i] == ':')
      j++;
  i += 1;
  j = 0;
  while (str[i] != ':' && str[i] != 0)
    new[j++] = str[i++];
  new[j] = 0;
  if (my_strcmp("Track Cleared", new) == 0)
    {
      free(new);
      exit(1);
    }
  free(new);
  return (0);
}

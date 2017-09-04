/*
** my_sort_int.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Nov 21 17:04:13 2016 Jules Spender
** Last update Thu Nov 24 03:31:21 2016 Jules Spender
*/

#include <stdlib.h>

int	*my_sort_int(int *rendu, int u, int i, int a)
{
  int	max;
  int	n;
  int	*ranked;

  n = 0;
  i = 0;
  ranked = malloc(sizeof(int) * u);
  while (i < u)
    {
      max = u;
      while (a < u)
	{
	  if (rendu[i] < rendu[a])
	    max = max - 1;
	  a = a + 1;
	}
      ranked[i] = max;
      i = i + 1;
      a = 0;
    }
  i = 0;
  while (i < u)
    {
      rendu[i] = ranked[i];
      i = i + 1;
    }
  free (ranked);
  return (rendu);
}

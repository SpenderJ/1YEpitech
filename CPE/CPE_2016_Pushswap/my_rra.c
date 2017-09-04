/*
** my_rra.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Mon Nov 21 21:55:47 2016 Jules Spender
** Last update Thu Nov 24 16:10:01 2016 Jules Spender
*/

#include <stdlib.h>

int	*my_rra(int *rendu, int Compteur, int i)
{
  int	b;
  int	*result;

  result = malloc(sizeof(int) * (Compteur * Compteur));
  b = 0;
  i = 0;
  Compteur = Compteur - 1;
  while (i < Compteur)
    {
      if (i == 0)
	result[i] = rendu[Compteur - 1];
      else
	result[i] = rendu[i - 1];
      i = i + 1;
    }
  i = 0;
  while (i < Compteur)
    {
      rendu[i] = result[i];
      i = i + 1;
    }
  free (result);
  return (rendu);
}

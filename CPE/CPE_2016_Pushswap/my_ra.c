/*
** my_ra.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 24 16:03:26 2016 Jules Spender
** Last update Fri Nov 25 19:23:17 2016 Jules Spender
*/

#include <stdlib.h>

int     *my_ra(int *rendu, int Compteur, int i)
{
  int   b;
  int   *result;

  result = malloc(sizeof(int) * (Compteur * Compteur));
  b = 0;
  i = 0;
  Compteur = Compteur - 1;
  while (i < Compteur)
    {
      if (i == Compteur - 1)
	result[i] = rendu[0];
      else
	result[i] = rendu[i + 1];
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

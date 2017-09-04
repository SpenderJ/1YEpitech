/*
** my_chooser.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Fri Nov 25 20:26:25 2016 Jules Spender
** Last update Sun Nov 27 22:33:05 2016 Jules Spender
*/

#include <unistd.h>
#include "include/my.h"

int	*my_chooser(int *rendu, int Compteur, int a, int n)
{
  int	k;

  k = 0;
  if (a > (Compteur - 1) / 2)
    {
      while (rendu[k] != n)
	{
	  write(1, "rra ", 4);
	  rendu = my_rra(rendu, Compteur, 0);
	}
    }
  else
    {
      while (rendu[k] != n)
	{
	  write(1, "ra ", 3);
	  rendu = my_ra(rendu, Compteur, 0);
	}
    }
  return (rendu);
}

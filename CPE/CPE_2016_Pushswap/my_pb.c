/*
** my_pb.c for emacs in /home/jules/CPE_2016_Pushswap
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Tue Nov 22 07:30:00 2016 Jules Spender
** Last update Fri Nov 25 19:55:32 2016 Jules Spender
*/

#include <stdlib.h>

int	*my_pb(int *rendu, int Compteur, int b, int i)
{
  i = 1;
  b = 0;
  while (b < Compteur)
    {
      rendu[b] = rendu[b + 1];
      b = b + 1;
    }
  return (rendu);
}

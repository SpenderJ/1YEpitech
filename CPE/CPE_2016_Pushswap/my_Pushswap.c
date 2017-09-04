/*
** my_Pushswap.c for emacs in /home/jules/CPE_2016_Pushswap/Pushswap2.0
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Tue Nov 22 09:52:24 2016 Jules Spender
** Last update Fri Apr 14 11:26:15 2017 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int	my_pushswap(int argc, char **argv, int n, int k)
{
  int	NbreChiffre;
  int	Compteur;
  int	*rendu;
  int	i;

  NbreChiffre = argc;
  Compteur = 1;
  rendu = malloc(sizeof(int) * (NbreChiffre * Compteur));
  while (Compteur < NbreChiffre)
    {
      rendu[Compteur - 1] = my_getnbr(argv[Compteur]);
      Compteur = Compteur + 1;
    }
  i = nodoubles(rendu, Compteur);
  if (i == 84)
    return (84);
  i = Optriv2(argc, rendu);
  if (i == 1)
    return (0);
  i = Optri(argc, rendu);
  if (i == 1)
    return (0);
  rendu = my_sort_int(rendu, Compteur - 1, 0, 0);
  my_pushwap2(rendu, Compteur, 0, 1);
  return (0);
}

int	my_pushwap2(int *rendu, int Compteur, int k, int n)
{
  int	i;
  int	a;

  i = 0;
  while (Compteur - n >= 1)
    {
      a = 0;
      k = 0;
      while (rendu[a] != n)
	a = a + 1;
      rendu = my_chooser(rendu, Compteur, a, n);
      write(1, "pb ", 3);
      i = i + 1;
      rendu = my_pb(rendu, Compteur, 0, 1);
      n = n + 1;
    }
  while (i > 1)
    {
      write(1, "pa ", 3);
      i = i - 1;
    }
  write(1, "pa\n", 3);
  return (0);
}

int	nodoubles(int *rendu, int Compteur)
{
  int	n;
  int	k;
  
  n = 0;
  k = 0;
  while (k < Compteur - 1)
    {
      while (n < Compteur - 1)
	{
	  if (n == k)
	    n = n + 1;
	  if (rendu[k] == rendu[n])
	    {
	      write(2, "Error : Wrong Argument",23);
	      return (84);
	    }
	  n = n + 1;
	}
      k = k + 1;
      n = 0;
    }
  return (0);
}

int	Optri(int argc, int *rendu)
{
  int	i;

  i = 0;
  if (argc == 1)
    {
      write(2, "Erreur, 0 argument", 18);
      return (84);
    }
  if (argc == 2)
    {
      write(1, "\n", 1);
      return (1);
    }
  while (i < argc)
    {
      if (rendu[i] < rendu[i + 1])
	i = i + 1;
      else
	return (0);
      if (i + 1 == argc - 2 && rendu[i] < rendu[i + 1])
	{
	  write(1, "\n", 1);
	  return (1);
	}
    }
  return (0);
}

int	Optriv2(int argc, int *rendu)
{
  int	i;

  i = 0;
  if (argc == 3 && rendu[0] < rendu[1])
    {
      write(1, "\n", 1);
      return (1);
    }
  return (0);
}

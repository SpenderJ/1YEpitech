/*
** my_printer.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Thu Dec 15 15:41:47 2016 Jules Spender
** Last update Sun Dec 18 19:46:47 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_printer(char **array, int Square_Size, int vertical, int horizontal, int error)
{
  int   vertical_search;
  int   horizontal_search;
  int   Compteur;
  int   Slow_Compteur;
  int	result;

  vertical_search = 0;
  horizontal_search = 0;
  Compteur = 0;
  Slow_Compteur = 0;
  result = 0;
  Square_Size = Square_Size - 1;
  while (Square_Size <= vertical && Square_Size < horizontal && Square_Size != -3)
    {
      while (vertical_search - Slow_Compteur <= Square_Size && error == 0 && vertical_search < vertical)
	{
	  while(horizontal_search - Compteur <= Square_Size && error == 0 && horizontal_search < horizontal)
	    {
	      if (array[vertical_search][horizontal_search] == '.')
		horizontal_search = horizontal_search + 1;
	      else
		error = 1;
	    }
	  horizontal_search = horizontal_search - (Square_Size + 1);
	  vertical_search = vertical_search + 1;
	}
      if (error == 1 && Compteur < horizontal)
	{
	  Compteur = Compteur + 1;
	  horizontal_search = Compteur;
	  vertical_search = Slow_Compteur;
	  error = 0;
	}
      else if (error == 1 && Slow_Compteur < vertical)
	{
	  Slow_Compteur = Slow_Compteur + 1;
	  horizontal_search = 0;
	  Compteur = 0;
	  vertical_search = Slow_Compteur;
	  error = 0;
	}
      else if (error == 1)
	{
	  Square_Size = Square_Size + 1;
	  Slow_Compteur = 0;
	  Compteur = 0;
	  error = 0;
	}
      else if (error == 0 && vertical_search - Slow_Compteur == Square_Size + 1)
	{
	  Slow_Compteur = 0;
	  Compteur = 0;
	  vertical_search = vertical_search - 1;
	  horizontal_search = horizontal_search;
	  while (Compteur <= Square_Size)
	    {
	      while (Slow_Compteur <= Square_Size)
		{
		  array[vertical_search - Compteur][horizontal_search + Slow_Compteur] = 'x';
		  Slow_Compteur = Slow_Compteur + 1;
		}
	      Slow_Compteur = 0;
	      Compteur = Compteur + 1;
	    }
	  Square_Size = -3;
	}
    }
  Compteur = 0;
  Slow_Compteur = 0;
  while (Compteur < vertical)
    {
      while (Slow_Compteur < horizontal)
	{
	  my_putchar(array[Compteur][Slow_Compteur]);
	  Slow_Compteur = Slow_Compteur + 1;
	}
      my_putchar('\n');
      Slow_Compteur = 0;
      Compteur = Compteur + 1;
    }
  return (0);
}

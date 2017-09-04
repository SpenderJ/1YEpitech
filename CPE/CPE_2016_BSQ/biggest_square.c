/*
** biggest_square.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 17:26:04 2016 Jules Spender
** Last update Sun Dec 18 19:46:08 2016 Jules Spender
*/

#include <stdlib.h>
#include "include/my.h"

int	biggest_square(char **array, int vertical, int horizontal, int error, int result)
{
  int	Square_Size;
  int	vertical_search;
  int	horizontal_search;
  int	Compteur;
  int	Slow_Compteur;

  Square_Size = 0;
  vertical_search = 0;
  horizontal_search = 0;
  Compteur = 0;
  Slow_Compteur = 0;
  while (Square_Size <= vertical && Square_Size < horizontal)
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
      if (result != 0 && result < Square_Size)
	{
	  my_printer(array, result, vertical, horizontal, 0);
	  return (0);
	}
      else if (error == 1 && Compteur < horizontal)
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
	  vertical_search = 0;
	  horizontal_search = 0;
	  Square_Size = Square_Size + 1;
	  result = Square_Size;
	}
      else
	{
	  Slow_Compteur = 0;
	  Compteur = 0;
	  vertical_search = 0;
	  horizontal_search = 0;
	  Square_Size = Square_Size + 1;
	}
    }
  my_printer(array, result, vertical, horizontal, 0);
  return (0);
}

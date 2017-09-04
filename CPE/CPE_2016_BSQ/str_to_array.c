/*
** str_to_array.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 17:26:04 2016 Jules Spender
** Last update Sun Dec 18 19:47:17 2016 Jules Spender
*/

#include <stdlib.h>
#include "include/my.h"
#include <unistd.h>
#include <stdio.h>

char	**str_to_array(char *str, int vertical, int horizontal)
{
  int	i;
  int	a;
  int	b;
  char	**my_array;

  my_array = malloc(sizeof(char*) * (vertical * horizontal));
  i = 0;
  a = 0;
  b = 0;
  while (str[i] != '\0')
    {
      my_array[a] = malloc(sizeof(char) * (horizontal * vertical));
      while (str[i] != '\n')
	{
	  my_array[a][b] = str[i];
	  i = i + 1;
	  b = b + 1;
	}
      i = i + 1;
      a = a + 1;
      b = 0;
    }
  biggest_square(my_array, vertical, horizontal, 0, 0);
  return (0);
}

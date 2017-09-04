/*
** sum_params.c for emacs in /home/jules.spender/CPool_Day08/task02
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.net>
** 
** Started on  Wed Oct 12 09:48:25 2016 Jules Spender
** Last update Fri Oct 14 14:55:04 2016 Jules Spender
*/

#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  int	a;
  int  	b;
  int	c;
  char	*dest;

  dest = malloc(15000);
  a = 0;
  b = 0;
  c = 0;
  while (a < argc)
    {
      while (argv[a][b] != '\0')
	{
	  dest[c] = argv[a][b];
	  c = c + 1;
	  b = b + 1;
	}
      if (i != argc - 1)
	  dest[c] = '\n';
      c = c + 1;
      a = a + 1;
    }
  dest[c] = '\0';
  return (dest);
}

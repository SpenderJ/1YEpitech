/*
** my_map_to_str.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 13:49:50 2016 Jules Spender
** Last update Sun Dec 18 19:46:32 2016 Jules Spender
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "include/my.h"

char	*my_map_to_str(char **argv, int i, int a)
{
  int	fdIn;
  int	b;
  int	nbRead;
  char	*buffer;
  char	*str;

  str = malloc(sizeof(char) * (a + a));
  buffer = malloc(sizeof(char) * 8);
  fdIn = open(argv[1], O_RDONLY);
  b = 0;
  i = 0;
  nbRead = read(fdIn, buffer, sizeof(buffer));
  while (nbRead > 0)
    {
      while (i < 8)
	{
	  str[b] = buffer[i];
	  i = i + 1;
	  b = b + 1;
	}
      i = 0;
      nbRead = read(fdIn, buffer, sizeof(buffer));
    }
  free (buffer);
  close (fdIn);
  my_square(str, 1, 1);
  return (0);
}

/*
** infin_add.c for emacs in /home/david.xu/CPool_infinadd
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Mon Oct 24 10:45:51 2016 david xu
** Last update Thu Nov  3 17:43:52 2016 Jules Spender
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char	*infin_add(char **argv)
{
  int	s1;
  int	s2;

  s1 = my_strlen(argv[1]) - 1;
  s2 = my_strlen(argv[2]) - 1;
  if (s2 <= s1)
    return (one_sup_two(argv, s1, s2));
  if (s2 > s1)
    return (two_sup_one(argv, s1, s2));
  else
    return (0);
}

char	*one_sup_two(char **argv, int s1, int s2)
{
  char	*str;

  s1 = s1 + 1;
  str = malloc(sizeof(char) * s1 + 2);
  while (s2 >= 0)
    {
      str[s1] = argv[2][s2];
      s1 = s1 - 1;
      s2 = s2 - 1;
    }
  while (s1 >= 0)
    {
      str[s1] = '0';
      s1 = s1 - 1;
    }
  return (add1(argv, str));
  free(str);
}

char    *add1(char **argv, char *str)
{
  int   r;
  int   b;

  b = 0;
  while (argv[1][b] != '\0')
    b += 1;
  while (b > 0)
    {
      r = argv[1][b - 1] - 48 + str[b] - 48;
      if (r > 9)
	{
	  r = (r - 10);
	  str[b - 1] = str[b - 1] + 1;
	}
      str[b] = r + 48;
      b = b - 1;
    }
  return (str);
}

char	*two_sup_one(char **argv, int s1, int s2)
{
  char	*str;

  s2 = s2 + 1;
  str = malloc(sizeof(char) * s2 + 2);
  while (s1 >= 0)
    {
      str[s2] = argv[1][s1];
      s1 = s1 - 1;
      s2 = s2 - 1;
    }
  while (s2 >= 0)
    {
      str[s2] = '0';
      s2 = s2 - 1;
    }
  return (add2(argv, str));
  free(str);
}

char	*add2(char **argv, char *str)
{
  int	r;
  int	b;

  b = 0;
  while (argv[2][b] != '\0')
    b += 1;
  while (b > 0)
    {
      r = argv[2][b - 1] - 48 + str[b] - 48;
      if (r > 9)
	{
	  r = (r - 10);
	  str[b - 1] = str[b - 1] + 1;
	}
      str[b] = r + 48;
      b = b - 1;
    }
  return (str);
}

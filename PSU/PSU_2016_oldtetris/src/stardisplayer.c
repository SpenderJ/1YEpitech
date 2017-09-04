/*
** stardisplayer.c for emacs in /home/jules/PSU/PSU_2016_tetris/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Fri Mar 10 13:27:17 2017 Jules Spender
** Last update Wed Mar 15 18:12:19 2017 Jules Spender
*/

#include "my_h.h"

char	**stardisplayer(char **array, int n, int a)
{
  int	i;

  i = 0;
  while (array[n][i] != '\0')
    {
      if (array[n][i] == '*')
	a = a + 1;
      i = i + 1;
    }
  i = 0;
  if (a == 0)
    {
      array[n][0] = '\n';
      array[n][1] = '\0';
      return (array);
    }
  while (a > 0)
    {
      if (array[n][i] == '*')
	a = a - 1;
      i = i + 1;
    }
  array[n][i] = '\0';
  return (array);
}

/*
** usefull.c for emacs in /home/jules/TOURNAMENT/dante/breadth/others
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Apr 24 17:11:14 2017 Jules Spender
** Last update Mon Apr 24 17:13:22 2017 Jules Spender
*/

#include "breadth/include/my_h.h"

int	printtab(char **map)
{
  int	i;

  i = 0;
  while (map[i] != NULL)
    {
      my_putstr(map[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}

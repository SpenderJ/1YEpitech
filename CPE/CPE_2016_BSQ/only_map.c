/*
** only_map.c for emacs in /home/jules/CPE/CPE_2016_BSQ
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Dec 14 17:08:23 2016 Jules Spender
** Last update Sun Dec 18 19:47:02 2016 Jules Spender
*/

#include <stdlib.h>
#include "include/my.h"

char	*only_map(char *str)
{
  char	*final_str;
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (str[i] != '\n')
    i = i + 1;
  final_str = malloc(sizeof(char) * (my_strlen(str) - i));
  i = i + 1;
  while (str[i] != '\0')
    {
      final_str[a] = str[i];
      a = a + 1;
      i = i + 1;
    }
  final_str[a] = '\0';
  return (final_str);
}
  

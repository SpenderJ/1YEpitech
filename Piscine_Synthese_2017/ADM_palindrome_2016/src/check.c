/*
** check.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_palindrome_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Jun 15 11:18:49 2017 Jules Spender
** Last update Fri Jun 16 13:45:23 2017 Jules Spender
*/

#include "my_h.h"

int	check_b(char *str, int *base, int *imin, int *imax)
{
  if (str == NULL)
    return (84);
  if (my_isnum(str) != 0)
    return (84);
  *base = atoi(str);
  if (*base <= 1 || *base > 10)
    return (84);
  return (0);
}

int	check_imin(char *str, int *base, int *imin, int *imax)
{
  if (str == NULL)
    return (84);
  if (my_isnum(str) != 0)
    return (84);
  *imin = atoi(str);
  if (*imin < 0)
    return (84);
  return (0);
}

int     check_imax(char *str, int *base, int *imin, int *imax)
{
  if (str == NULL)
    return (84);
  if (my_isnum(str) != 0)
    return (84);
  *imax = atoi(str);
  if (*imax < 0)
    return (84);
  return (0);
}

int	my_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= '9' && str[i] >= '0')
	i = i + 1;
      else
	return (84);
    }
  return (0);
}

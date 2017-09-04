/*
** box_hit.c for emacs in /home/david.xu/tek_perso/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Fri May 26 15:30:24 2017 david xu
** Last update Sun May 28 17:23:13 2017 david xu
*/

#include "my_h3.h"

int	up_box(int x, int y)
{
  if (y <= 230)
    return (1);
  return (0);
}

int	right_box(int x, int y)
{
  if (x >= 575)
    return (1);
  return (0);
}

int	down_box(int x, int y)
{
  if (y >= 530)
    return (1);
  return (0);
}

int	left_box(int x, int y)
{
  if (x <= 205)
    return (1);
  return (0);
}

/*
** box_end.c for emacs in /home/david.xu/tekadventure/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sun May 28 19:04:39 2017 david xu
** Last update Sun May 28 20:35:56 2017 blaise carnevillier
*/

#include "my_h3.h"

int     up_boxend(int x, int y)
{
  if (x >= 372 && x <= 429)
    if (y <= 225)
      return (2);
  if (y <= 220)
    return (1);
  return (0);
}

int     right_boxend(int x, int y)
{
  if (x >= 575)
    return (1);
  return (0);
}

int     down_boxend(int x, int y)
{
  if (y >= 530)
    return (1);
  return (0);
}

int     left_boxend(int x, int y)
{
  if (x <= 205)
    return (1);
  return (0);
}

/*
** fleche2.c for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat May 27 11:43:45 2017 blaise carnevillier
** Last update Sat May 27 14:54:05 2017 blaise carnevillier
*/

#include "my_h.h"
#include "map2.h"

int     fleche(sfRenderWindow *win, t_player *player, int *room)
{
  if (player->x == 520 && player->y == 477)
    {
      return (0);
    }
  player->f += 1;
  return (1);
}

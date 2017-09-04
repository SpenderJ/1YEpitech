/*
** collisions.c for emacs in /home/ugo.bensaid/scroller
** 
** Made by ugo bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Sun May 28 13:24:54 2017 ugo bensaid
** Last update Sun May 28 22:23:18 2017 blaise carnevillier
*/

#include <stdlib.h>
#include "my.h"

int	c_plane(t_collision *col)
{
  if ((col->pos_mario.x + 737 * 0.08 >= col->pos_plane.x
       && col->pos_mario.x + 737 * 0.08 <= col->pos_plane.x + 348 * 0.5)
      && (col->pos_mario.y >= col->pos_plane.y
	  && col->pos_mario.y <= col->pos_plane.y + 155 * 0.5))
    return (0);
}

int	c_spoink(t_collision *col)
{
  if ((col->pos_mario.x + 737 * 0.08 >= col->pos_spoink.x
       && col->pos_mario.x + 737 * 0.08 <= col->pos_spoink.x + 175 * 0.4)
      && (col->pos_mario.y >= col->pos_spoink.y
	  && col->pos_mario.y <= col->pos_spoink.y + 297 * 0.4))
    return (0);
}

int	c_balloon(t_collision *col)
{
  if ((col->pos_mario.x + 737 * 0.08 >= col->pos_balloon.x
       && col->pos_mario.x + 737 * 0.08 <= col->pos_balloon.x + 122 * 1)
      && (col->pos_mario.y >= col->pos_balloon.y
	  && col->pos_mario.y <= col->pos_balloon.y + 146 * 1))
    return (0);
}

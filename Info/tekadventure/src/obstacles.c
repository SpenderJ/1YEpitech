/*
** obstacles.c for emacs in /home/ugo.bensaid/scroller/src
** 
** Made by ugo bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Sat May 27 09:53:54 2017 ugo bensaid
** Last update Sun May 28 20:11:39 2017 ugo bensaid
*/

#include "my.h"

void	display_plane(sfRenderWindow *window, sfSprite *sprite,
		      t_collision *collision)
{
  static int	bool = 0;

  collision->pos_plane = sfSprite_getPosition(sprite);
  if (bool == 0)
    collision->pos_plane.y += 0.1;
  else
    collision->pos_plane.y -= 0.1;
  collision->pos_plane.x -= 0.3;
  sfSprite_setPosition(sprite, collision->pos_plane);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  if (collision->pos_plane.y >= 70)
    bool = 1;
  if (collision->pos_plane.y <= 10)
    bool = 0;
  if (collision->pos_plane.x < -800)
    {
      collision->pos_plane.x = 800;
      sfSprite_setPosition(sprite, collision->pos_plane);
      sfRenderWindow_drawSprite(window, sprite, NULL);
    }
}

int	plane(sfRenderWindow *window, t_collision *collision)
{
  static sfSprite       *sprite = NULL;

  if (sprite == NULL)
    {
      sprite = create_sprite("textures/avion.png");
      set_scale(sprite, 0.5);
      collision->pos_plane.x = 1000;
      collision->pos_plane.y = -200;
      sfSprite_setPosition(sprite, collision->pos_plane);
    }
  else
    display_plane(window, sprite, collision);
  return (0);
}

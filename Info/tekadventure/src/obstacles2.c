/*
** obstacles2.c for emacs in /home/ugo.bensaid/scroller
** 
** Made by ugo bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Sat May 27 13:40:05 2017 ugo bensaid
** Last update Sun May 28 20:12:03 2017 ugo bensaid
*/

#include "my.h"

void		display_balloon(sfRenderWindow *window, sfSprite *sprite,
				t_collision *collision)
{
  collision->pos_balloon = sfSprite_getPosition(sprite);
  sfSprite_setPosition(sprite, collision->pos_balloon);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  if (collision->pos_balloon.x < -800)
    collision->pos_balloon.x = 800;
  else
    collision->pos_balloon.x -= 0.1;
  sfSprite_setPosition(sprite, collision->pos_balloon);
  sfRenderWindow_drawSprite(window, sprite, NULL);
}

int			balloon(sfRenderWindow *window, t_collision *collision)
{
  static sfSprite       *sprite = NULL;

  if (sprite == NULL)
    {
      sprite = create_sprite("textures/miaouss_balloon.png");
      set_scale(sprite, 1);
      collision->pos_balloon.x = 350;
      collision->pos_balloon.y = 60;
      sfSprite_setPosition(sprite, collision->pos_balloon);
    }
  else
    display_balloon(window, sprite, collision);
  return (0);
}

void		display_spoink(sfRenderWindow *window, sfSprite *sprite,
			       t_collision *collision)
{
  static int	bool = 0;

  collision->pos_spoink = sfSprite_getPosition(sprite);
  if (bool == 0)
    collision->pos_spoink.y += 0.1;
  else
    collision->pos_spoink.y -= 0.2;
  sfSprite_setPosition(sprite, collision->pos_spoink);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  if (collision->pos_spoink.y >= 290)
    bool = 1;
  if (collision->pos_spoink.y <= 200)
    bool = 0;
  if (collision->pos_spoink.x < -800)
    collision->pos_spoink.x = 800;
  else
    collision->pos_spoink.x -= 0.25;
  sfSprite_setPosition(sprite, collision->pos_spoink);
  sfRenderWindow_drawSprite(window, sprite, NULL);
}

int			spoink(sfRenderWindow *window, t_collision *collision)
{
  static sfSprite       *sprite = NULL;

  if (sprite == NULL)
    {
      sprite = create_sprite("textures/spoink.png");
      set_scale(sprite, 0.4);
      collision->pos_spoink.x = 800;
      collision->pos_spoink.y = 275;
      sfSprite_setPosition(sprite, collision->pos_spoink);
    }
  else
    display_spoink(window, sprite, collision);
  return (0);
}

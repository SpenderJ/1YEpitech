/*
** ground.c for  in /home/Tenshine/delivery/scroller/src
** 
** Made by Ugo Bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Sun Apr  2 18:27:12 2017 ugo bensaid
** Last update Sun May 28 22:25:14 2017 blaise carnevillier
*/

#include <stdlib.h>
#include "my.h"

void		display_ground(sfRenderWindow *window, sfSprite *sprite,
			      sfSprite *sprite_sec)
{
  sfVector2f	pos;

  pos = sfSprite_getPosition(sprite);
  if (pos.x < -800)
    pos.x = 800;
  else
    pos.x = pos.x - 0.3;
  sfSprite_setPosition(sprite, pos);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  pos = sfSprite_getPosition(sprite_sec);
  if (pos.x < -800)
    pos.x = 800;
  else
    pos.x = pos.x - 0.3;
  sfSprite_setPosition(sprite_sec, pos);
  sfRenderWindow_drawSprite(window, sprite_sec, NULL);
}

int			ground(sfRenderWindow *window)
{
  static sfSprite	*sprite = NULL;
  static sfSprite	*sprite_sec = NULL;
  sfVector2f		pos;

  if (sprite == NULL || sprite_sec == NULL)
    {
      sprite = create_sprite("textures/grass_floor.png");
      sprite_sec = create_sprite("textures/grass_floor.png");
      set_scale(sprite, 2.5);
      set_scale(sprite_sec, 2.5);
      pos.x = 0;
      pos.y = 360;
      sfSprite_setPosition(sprite, pos);
      pos.x = 800;
      pos.y = 360;
      sfSprite_setPosition(sprite_sec, pos);
    }
  else
    display_ground(window, sprite, sprite_sec);
  return (0);
}

int		display_mario(sfRenderWindow *window, sfSprite *sprite, t_collision *co)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(window, &event))
    {
      co->pos_mario = sfSprite_getPosition(sprite);
      if (event.type == sfEvtClosed)
	sfRenderWindow_close(window);
      if (event.type == sfEvtMouseButtonPressed)
	{
	  if (event.mouseButton.y < co->pos_mario.y && co->pos_mario.y >= 50)
	    co->pos_mario.y -= 50;
	  else if (event.mouseButton.y > co->pos_mario.y && co->pos_mario.y <= 275)
	    co->pos_mario.y += 50;
	}
      if (event.type == sfEvtKeyPressed)
	{
	  if (event.key.code == sfKeyLeft && co->pos_mario.x >= 100)
	    co->pos_mario.x -= 50;
	  else if (event.key.code == sfKeyRight && co->pos_mario.x <= 650)
	    co->pos_mario.x += 50;
	}
      if (c_plane(co) == 0 ||  c_spoink(co) == 0 && c_balloon(co) == 0)
	return (0);
    }
  sfSprite_setPosition(sprite, co->pos_mario);
  sfRenderWindow_drawSprite(window, sprite, NULL);
}

int			mario(sfRenderWindow *window, t_collision *collision)
{
  static sfSprite	*sprite = NULL;

  if (sprite == NULL)
    {
      sprite = create_sprite("textures/pigeon.png");
      set_scale(sprite, 0.08);
      collision->pos_mario.x = 350;
      collision->pos_mario.y = 280;
      sfSprite_setPosition(sprite, collision->pos_mario);
    }
  else
    display_mario(window, sprite, collision);
  return (0);
}

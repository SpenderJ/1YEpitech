/*
** background.c for  in /home/Tenshine/delivery/scroller/src
** 
** Made by Ugo Bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Sun Apr  2 17:31:32 2017 ugo bensaid
** Last update Sun May 28 20:11:01 2017 ugo bensaid
*/

#include "my.h"

void		display_hills(sfRenderWindow *window, sfSprite *sprite,
			sfSprite *sprite_sec)
{
  sfVector2f	pos;

  pos = sfSprite_getPosition(sprite);
  pos.x = pos.x - 0.03;
  sfSprite_setPosition(sprite, pos);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  pos.x = pos.x + 1000;
  sfSprite_setPosition(sprite_sec, pos);
  sfRenderWindow_drawSprite(window, sprite_sec, NULL);
  if (pos.x <= 0)
    {
      sfSprite_setPosition(sprite, pos);
      sfRenderWindow_drawSprite(window, sprite, NULL);
    }
}

int			hills(sfRenderWindow *window)
{
  static sfSprite	*sprite = NULL;
  static sfSprite	*sprite_sec = NULL;
  sfVector2f		pos;

  if (sprite == NULL || sprite_sec == NULL)
    {
      sprite = create_sprite("textures/montagnes.png");
      sprite_sec = create_sprite("textures/montagnes.png");
      set_scale(sprite, 1.1);
      set_scale(sprite_sec, 1.1);
      pos.x = 0;
      pos.y = 60;
      sfSprite_setPosition(sprite, pos);
    }
  else
    display_hills(window, sprite, sprite_sec);
  return (0);
}

void		display_sky(sfRenderWindow *window, sfSprite *sprite,
			sfSprite *sprite_sec)
{
  sfVector2f	pos;

  pos = sfSprite_getPosition(sprite);
  pos.x = pos.x - 0.01;
  sfSprite_setPosition(sprite, pos);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  pos.x = pos.x + 750;
  sfSprite_setPosition(sprite_sec, pos);
  sfRenderWindow_drawSprite(window, sprite_sec, NULL);
  if (pos.x <= 0)
    {
      sfSprite_setPosition(sprite, pos);
      sfRenderWindow_drawSprite(window, sprite, NULL);
    }
}

int			sky(sfRenderWindow *window)
{
  static sfSprite	*sprite = NULL;
  static sfSprite	*sprite_sec = NULL;
  sfVector2f		pos;

  if (sprite == NULL || sprite_sec == NULL)
    {
      sprite = create_sprite("textures/sky.png");
      sprite_sec = create_sprite("textures/sky.png");
      set_scale(sprite, 0.8);
      set_scale(sprite_sec, 0.8);
      pos.x = 0;
      pos.y = 0;
      sfSprite_setPosition(sprite, pos);
    }
  else
    display_sky(window, sprite, sprite_sec);
  return (0);
}

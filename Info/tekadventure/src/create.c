/*
** create.c for  in /home/Tenshine/delivery/scroller/src
** 
** Made by Xavier Hainneville
** Login   <Tenshine@epitech.net>
** 
** Started on  Sun Apr  2 16:15:21 2017 Xavier Hainneville
** Last update Sun Apr  2 18:32:21 2017 Xavier Hainneville
*/

#include "my.h"

void		set_scale(sfSprite *sprite, float size)
{
  sfVector2f	scale;

  scale.x = size;
  scale.y = size;
  sfSprite_setScale(sprite, scale);
}

sfSprite	*create_sprite(char *filename)
{
  sfTexture	*texture;
  sfSprite	*sprite;

  if (!(texture = sfTexture_createFromFile(filename, NULL)))
    return (NULL);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  return (sprite);
}

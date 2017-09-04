/*
** anim.c for scroller in /home/hecto/scroller
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sun Apr  2 15:21:23 2017 blaise carnevillier
** Last update Sun Apr  2 20:46:48 2017 blaise carnevillier
*/

#include "my_h.h"

sfSprite        *init_sprite(char *str)
{
  sfTexture     *tex;
  sfSprite      *sprite;

  if (!(tex = sfTexture_createFromFile(str, NULL)))
    return (NULL);
  if (!(sprite = sfSprite_create()))
    return (NULL);
  sfSprite_setTexture(sprite, tex, sfTrue);
  return (sprite);
}

int	anim(sfRenderWindow *w)
{
  sfSprite	*sp;

  if (!(sp1 = init_sprite("include/textures/montagnes.png")))
    return (84);
  sfRenderWindow_clear(w, sfBlack);
  sfSprite_setTexturerect()
  sfRenderWindow_drawSprite(w, sp, NULL);
}

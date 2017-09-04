/*
** sprites.c for scroller in /home/hecto/scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 18:30:09 2017 blaise carnevillier
** Last update Sun Apr  2 20:45:16 2017 blaise carnevillier
*/

#include "my_h.h"

sfSprite	*init_sprite(char *str)
{
  sfTexture	*tex;
  sfSprite	*sprite;

  if (!(tex = sfTexture_createFromFile(str, NULL)))
    return (NULL);
  if (!(sprite = sfSprite_create()))
    return (NULL);
  sfSprite_setTexture(sprite, tex, sfTrue);
  return (sprite);
}

int	landscape(sfRenderWindow *w)
{
  sfMusic	*music;
  sfMusic	*music2;
  sfSprite	*sp1;
  sfSprite	*sp2;
  sfVector2f	v;

  if (!(sp1 = init_sprite("include/textures/montagnes.png")))
    return (84);
  if (!(sp2 = init_sprite("include/textures/nuages1.png")))
    return (84);
  if (!(music = scroller_music("music/myth.bsf")))
    return (84);
  if (!(music2 = scroller_music("music/die.ogg")))
    return (84);
  while (1)
    {
      v.y = 0.1;
      sfRenderWindow_clear(w, sfCyan);
      sfRenderWindow_drawSprite(w, sp2, NULL);
      sfRenderWindow_drawSprite(w, sp1, NULL);
      sfRenderWindow_display(w);
    }
  music_stop(music);
}

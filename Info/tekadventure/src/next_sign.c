/*
** next_sign.c for emacs in /home/david.xu/tekadventure
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sun May 28 17:38:12 2017 david xu
** Last update Sun May 28 17:38:54 2017 david xu
*/

#include "my_h3.h"

int             click_sign3(sfRenderWindow *win, t_cobble *enigme)
{
  sfEvent       event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed && event.key.code == sfKeyEscape)
	{
	  sfRenderWindow_close(win);
	  exit(0);
	}
      if (event.mouseButton.x >= 39 && event.mouseButton.x <= 85
	  && event.mouseButton.y >= 99 && event.mouseButton.y <= 162)
	enigme->t = enigme->t + 45;
      if (event.mouseButton.x >= 129 && event.mouseButton.x <= 175
	  && event.mouseButton.y >= 99 && event.mouseButton.y <= 162)
	enigme->e = enigme->e + 45;
      if (event.mouseButton.x >= 214 && event.mouseButton.x <= 266
	  && event.mouseButton.y >= 99 && event.mouseButton.y <= 162)
	enigme->k = enigme->k + 45;
    }
  return (0);
}

sfSprite        *create_sprite3(char *filename)
{
  sfTexture     *texture;
  sfSprite      *sprite;

  if (!(texture = sfTexture_createFromFile(filename, NULL)))
    return (NULL);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  return (sprite);
}

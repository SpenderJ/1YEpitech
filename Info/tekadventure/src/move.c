/*
** move.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 17:45:22 2017 Jules Spender
** Last update Sun May 28 17:00:56 2017 Jules Spender
*/

#include "my_h.h"

int	get_move(sfRenderWindow *win, int *x, int *y)
{
  sfEvent       event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed)
	{
	  sfRenderWindow_close(win);
	  exit (0);
	}
      if (event.type == sfEvtKeyPressed)
	{
	  if (event.key.code == sfKeyUp)
	    return (run_up(win, "textures/pnggoldé.png", *x, *y = *y - 30));
	  else if (event.key.code == sfKeyDown)
	    return (run_down(win, "textures/pnggoldé.png", *x, *y = *y + 30));
	  else if (event.key.code == sfKeyRight)
	    return (run_right(win, "textures/pnggoldé.png", *x = *x + 30, *y));
	  else if (event.key.code == sfKeyLeft)
	    return (run_left(win, "textures/pnggoldé.png", *x = *x - 30, *y));
	}
      if (event.type == sfEvtMouseButtonPressed)
	return (go_to_mouse(win, event, x, y));
    }
  return (0);
}

int	go_to_mouse(sfRenderWindow *win, sfEvent event, int *x, int *y)
{
  int	i;

  i = 0;
  while (event.mouseButton.y < *y + 30 && event.mouseButton.y < *y)
    run_up(win, "textures/pnggoldé.png", *x, *y = *y - 30);
  while (event.mouseButton.y > *y + 30 && event.mouseButton.y > *y)
    run_down(win, "textures/pnggoldé.png", *x, *y = *y + 30);
  while(event.mouseButton.x < *x - 15 && event.mouseButton.x < *x + 15)
    run_left(win, "textures/pnggoldé.png", *x = *x - 30, *y);
  while(event.mouseButton.x > *x + 15 && event.mouseButton.x > *x - 15)
    run_right(win, "textures/pnggoldé.png", *x = *x + 30, *y);
  return (0);
}

int     launch_png(sfRenderWindow *win, int *pos, int x, int y)
{
  sfTexture*    texture;
  sfSprite*     sprite;
  sfVector2u    size;
  sfVector2f    scale;
  sfIntRect	rectangle;

  rectangle = getface(pos);
  texture = sfTexture_createFromFile("textures/pnggoldé.png" ,NULL);
  if (!texture)
    return (84);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfSprite_setTextureRect(sprite, rectangle);
  size = sfTexture_getSize(texture);
  scale.x = 400 / (float)size.x;
  scale.y = 200 / (float)size.y;
  sfSprite_setScale(sprite, scale);
  scale.x = x;
  scale.y = y;
  sfSprite_setPosition(sprite, scale);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  sfRenderWindow_display(win);
  usleep(6666);
  sfSprite_destroy(sprite);
  sfTexture_destroy(texture);
  return (0);
}

sfIntRect	getface(int *pos)
{
  sfIntRect	rectangle;

  rectangle.left = 47 * pos[1];
  rectangle.top = 48 * pos[0];
  rectangle.width = 47;
  rectangle.height = 48;
  return (rectangle);
}

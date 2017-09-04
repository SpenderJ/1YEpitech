/*
** display_scenario.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon May 15 14:09:45 2017 Jules Spender
** Last update Wed May 24 16:47:41 2017 Jules Spender
*/

#include "my_h.h"

int	display_scenario(sfRenderWindow *win)
{
  int		i;
  int		ret;
  sfMusic*	music;

  i = 0;
  while (i != 2)
    {
      sfRenderWindow_clear(win, sfWhite);
      if (i == 0 && launch_background(win, "textures/hendeks1.jpg") == NULL)
	return (84);
      if (i == 0 && (music = launch_music("music/onappelleleshendek.ogg")) == NULL)
	return (84);
      if (i == 1 && launch_background(win, "textures/hendeks2.jpg") == NULL)
	return (84);
      sfRenderWindow_display(win);
      while ((ret = get_click(win) == 0));
      if (ret == 1)
	return (0);
      else
	i = i + 1;
    }
  sfMusic_destroy(music);
  return (0);
}

int	get_click(sfRenderWindow *win)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed)
	{
	  sfRenderWindow_close(win);
	  return (1);
	}
      if (event.type == sfEvtMouseButtonPressed)
	return (2);
    }
  return (0);
}

int	launch_box(sfRenderWindow *win, char *png, char *text)
{
  sfTexture*    texture;
  sfSprite*     sprite;
  sfVector2u	size;
  sfVector2f	scale;

  texture = sfTexture_createFromFile(png ,NULL);
  if (!texture)
    return (84);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  size = sfTexture_getSize(texture);
  scale.x = 750 / (float)size.x;
  scale.y = 100 / (float)size.y;
  sfSprite_setScale(sprite, scale);
  scale.x = 25;
  scale.y = 420;
  sfSprite_setPosition(sprite, scale);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  return (0);
}

sfTexture*	launch_background(sfRenderWindow *win, char *str)
{
  sfTexture*	texture;
  sfSprite*	sprite;

  texture = sfTexture_createFromFile(str ,NULL);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  return (texture);
}

int		print_background(sfTexture *texture, sfRenderWindow *win)
{
  sfSprite*	sprite;

  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  return (0);
}

sfMusic	*launch_music(char *str)
{
  sfMusic*	music;

  music = sfMusic_createFromFile(str);
  if (music == NULL)
    return (NULL);
  sfMusic_play(music);
  return (music);
}

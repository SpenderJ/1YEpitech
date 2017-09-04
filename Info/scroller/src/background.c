/*
** main.c for main in /home/yoann.sarkissian/SCROLLER/background
** 
** Made by Yoann Sarkissian
** Login   <yoann.sarkissian@epitech.net>
** 
** Started on  Sat Apr  1 23:57:22 2017 Yoann Sarkissian
** Last update Sun Apr  2 23:22:20 2017 Jules Spender
*/

#include "struct.h"

int	init_all(t_all *a, sfRenderWindow *win)
{
  a->window = win;
  if (!a->window)
    return (84);
  a->texture = \
    sfTexture_createFromFile("include/textures/desert_BG.png", NULL);
  if (!a->texture)
    return (84);
  a->sprite = sfSprite_create();
  a->sprite3 = sfSprite_create();
  sfSprite_setTexture(a->sprite, a->texture, sfTrue);
  a->sprite2 = sfSprite_copy(a->sprite);
  a->texture2 = \
    sfTexture_createFromFile("include/textures/barriere2.png", NULL);
  sfSprite_setTexture(a->sprite3, a->texture2, sfTrue);
  a->sprite4 = sfSprite_copy(a->sprite3);
  a->music = sfMusic_createFromFile("music/Faine-Klub-Pulse.ogg");
  if (!a->music)
    return (84);
  return (0);
}

void	use_sprites(t_all *a)
{
  (a->pos.x < -799)?(a->pos.x = 799):(a->pos.x -= 0.1);
  (a->pos2.x < -799)?(a->pos2.x = 799):(a->pos2.x -= 0.1);
  (a->pos3.x < -799)?(a->pos3.x = 799):(a->pos3.x -= 0.25);
  (a->pos4.x < -799)?(a->pos4.x = 799):(a->pos4.x -= 0.25);
  sfSprite_setPosition(a->sprite, a->pos);
  sfSprite_setPosition(a->sprite2, a->pos2);
  sfSprite_setPosition(a->sprite3, a->pos3);
  sfSprite_setPosition(a->sprite4, a->pos4);
  sfRenderWindow_drawSprite(a->window, a->sprite, NULL);
  sfRenderWindow_drawSprite(a->window, a->sprite2, NULL);
  sfRenderWindow_drawSprite(a->window, a->sprite3, NULL);
  sfRenderWindow_drawSprite(a->window, a->sprite4, NULL);
}

void	set_scale(t_all *a)
{
  a->scale1.x = 1;
  a->scale1.y = 1.65;
  sfSprite_setScale(a->sprite, a->scale1);
  sfSprite_setScale(a->sprite2, a->scale1);
}

void	set_window(t_all *a)
{
  a->pos.x = 0;
  a->pos2.x = 799;
  a->pos3.x = 0;
  a->pos3.y = 495;
  a->pos4.x = 799;
  a->pos4.y = 495;
  while (sfRenderWindow_isOpen(a->window))
    {
      while (sfRenderWindow_pollEvent(a->window, &a->event))
	{
	  if (a->event.type == sfEvtClosed)
	    sfRenderWindow_close(a->window);
	}
      sfRenderWindow_clear(a->window, sfBlack);
      set_scale(a);
      use_sprites(a);
      sfRenderWindow_display(a->window);
    }
}

int	background(sfRenderWindow *win)
{
  t_all	a;

  if (init_all(&a, win) == 84)
    return (84);
  sfMusic_play(a.music);
  set_window(&a);
  sfMusic_destroy(a.music);
  sfSprite_destroy(a.sprite);
  sfTexture_destroy(a.texture);
  sfRenderWindow_destroy(a.window);
  return (0);
}

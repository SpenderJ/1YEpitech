/*
** map2glace.c for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Wed May 24 10:46:07 2017 blaise carnevillier
** Last update Sun May 28 20:43:35 2017 Jules Spender
*/

#include "my_h.h"
#include "map2.h"

int	launch_png2(sfRenderWindow *win, int *pos, int x, int y)
{
  sfTexture	*texture;
  sfSprite	*sprite;
  sfVector2u	size;
  sfVector2f	scale;
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
  sfSprite_destroy(sprite);
  sfTexture_destroy(texture);
  return (0);
}

int	ch_run(sfRenderWindow *win, sfEvent event, t_player *p,  sfTexture *tex)
{
  if (event.key.code == sfKeyUp)
    while (run_up2(win, "textures/pnggoldé.png", p, tex) == 1);
  else if (event.key.code == sfKeyDown)
    while (run_down2(win, "textures/pnggoldé.png", p, tex) == 1);
  else if (event.key.code == sfKeyRight)
    while (run_right2(win, "textures/pnggoldé.png", p, tex) == 1);
  else if (event.key.code == sfKeyLeft)
    while (run_left2(win, "textures/pnggoldé.png", p, tex) == 1);
}

int	get_move2(sfRenderWindow *win, t_player *player, sfTexture *tex)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
	{
	  sfRenderWindow_close(win);
	  exit(0);
	}
      if (event.type == sfEvtKeyPressed)
	{
	  return (ch_run(win, event, player, tex)); 
	}
    }
  return (0);
}

int     map2(sfRenderWindow *win, int *room)
{
  t_player	*player;
  sfMusic	*music;
  sfTexture	*texture;

  player = malloc(sizeof(t_player));
  player->x = 760;
  player->y = 560;
  player->f = 0;
  if ((player->pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  player->pos[0] = 0;
  player->pos[1] = 0;
  if ((music = launch_music("music/gngEndTheme.ogg")) == NULL)
    return (84);
  if ((texture = launch_background(win, "textures/glace2.png")) == NULL)
    return (84);
  launch_png2(win, player->pos, player->x, player->y);
  while (fleche(win, player, room) == 1)
    {
      launch_png2(win, player->pos, player->x, player->y);
      print_background(texture, win);
      get_move2(win, player, texture);
    }
  *room = *room + 1;
  return (0);
}

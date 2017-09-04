/*
** sign.c for emacs in /home/david.xu/tek_perso/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sat May 27 13:54:23 2017 david xu
** Last update Sun May 28 21:03:52 2017 blaise carnevillier
*/

#include "my_h3.h"

float                   letter_t(sfRenderWindow *win, char *filename, float rot)
{
  static sfSprite       *sprite = NULL;
  sfVector2f            pos;

  if (sprite == NULL)
    {
      sprite = create_sprite3(filename);
      pos.x = 39;
      pos.y = 99;
      sfSprite_setPosition(sprite, pos);
    }
  else
    {
      pos.x = (pos.x / 2);
      pos.y = (pos.y / 2);
      sfSprite_setOrigin(sprite, pos);
      sfSprite_setRotation(sprite, rot);
      sfRenderWindow_drawSprite(win, sprite, NULL);
    }
  return (rot);
}

float                     letter_e(sfRenderWindow *win, char *filename, float rot)
{
  static sfSprite       *sprite = NULL;
  sfVector2f            pos;

  if (sprite == NULL)
    {
      sprite = create_sprite3(filename);
      pos.x = 129;
      pos.y = 99;
      sfSprite_setPosition(sprite, pos);
    }
  else
    {
      pos.x = (pos.x / 2);
      pos.y = (pos.y / 2);
      sfSprite_setOrigin(sprite, pos);
      sfSprite_setRotation(sprite, rot);
      sfRenderWindow_drawSprite(win, sprite, NULL);
    }
}

float			letter_k(sfRenderWindow *win, char *filename, float rot)
{
  static sfSprite	*sprite = NULL;
  sfVector2f		pos;

  if (sprite == NULL)
    {
      sprite = create_sprite3(filename);
      pos.x = 214;
      pos.y = 99;
      sfSprite_setPosition(sprite, pos);
    }
  else
    {
      pos.x = (pos.x / 2);
      pos.y = (pos.y / 2);
      sfSprite_setOrigin(sprite, pos);
      sfSprite_setRotation(sprite, rot);
      sfRenderWindow_drawSprite(win, sprite, NULL);
    }
  return (rot);
}

int                     put_sign(sfRenderWindow *win, char *filename)
{
  static sfSprite       *sprite = NULL;
  sfVector2f            pos;

  if (sprite == NULL)
    {
      sprite = create_sprite3(filename);
      pos.x = 0;
      pos.y = 0;
      sfSprite_setPosition(sprite, pos);
    }
  else
    sfRenderWindow_drawSprite(win, sprite, NULL);
  return (0);
}

int		sign3(sfRenderWindow *win, t_cobble *enigme)
{
  int		*pos;
  int		f;

  f = 1;
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  enigme->t = 180;
  enigme->e = 90;
  enigme->k = 270;
  while (sfRenderWindow_isOpen(win) && f == 1)
    {
      launch_png(win, pos, enigme->x, enigme->y);
      put_sign(win, "texture_enigme/pancarte.png");
      letter_t(win, "texture_enigme/T_normal.png", enigme->t);
      letter_e(win, "texture_enigme/E_normal.png", enigme->e);
      letter_k(win, "texture_enigme/K_normal.png", enigme->k);
      click_sign3(win, enigme);
      if (((int)enigme->t % 360) == 0 && ((int)enigme->e % 360) == 0
	  && ((int)enigme->k % 360) == 0)
      	f = final_enigme(win, enigme);
    }
  return (0);
}

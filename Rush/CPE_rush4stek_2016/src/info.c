/*
** info.c for emacs in /home/jules/Rush/CPE_rush4stek_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sat Jun  3 22:36:16 2017 Jules Spender
** Last update Sun Jun  4 22:52:14 2017 blaise carnevillier
*/

#include "../includes/n4s.h"

sfText  *init_text2(char *str, sfFont *font, sfColor col)
{
  sfText        *text;

  text = sfText_create();
  sfText_setString(text, str);
  sfText_setFont(text, font);
  sfText_setColor(text, col);
  sfText_setCharacterSize(text, 50);
  return (text);
}

sfText	*text_creator(char *str, sfFont *font, float x, int i)
{
  sfVector2f	v1;
  sfText	*txt;
  float		f;

  f = atof(str);
  if (f < 300)
    txt = init_text2(str, font, sfRed);
  else if (f < 800)
    txt = init_text2(str, font, sfYellow);
  else
    txt = init_text2(str, font, sfGreen);
  v1.x = x;
  if (i == 0)
    v1.y = 0;
  else
    v1.y = 550;
  sfText_setPosition(txt, v1);
  return (txt);
}

sfTexture*	l_b2(sfRenderWindow *win, sfFont *font, char **tab, t_move *m)
{
  char		*str;
  sfText	*mid;
  sfText	*left;
  sfText	*right;
  sfText	*lap;

  my_putstr("get_info_lidar\n");
  str = get_next_line(0);
  tab = my_str_to_wordtab(str, ':', 0);
  if (strncmp("Lap Cleared", tab[35], 11) == 0)
    m->lap[0] += 1;
  mid = text_creator(tab[16], font, 50, 0);
  left = text_creator(tab[3], font, 600, 0);
  right = text_creator(tab[34], font, 1100, 0);
  lap = text_creator(m->lap, font, 50, 1);
  sfRenderWindow_drawText(win, mid, NULL);
  sfRenderWindow_drawText(win, left, NULL);
  sfRenderWindow_drawText(win, right, NULL);
  sfRenderWindow_drawText(win, lap, NULL);
  sfRenderWindow_display(win);
  sfText_destroy(mid);
  sfText_destroy(left);
  sfText_destroy(right);
  sfText_destroy(lap);
  return (NULL);
}

sfTexture*      l_b(sfRenderWindow *win, char *str, sfFont* font, t_move *m)
{
  sfTexture	*texture;
  sfSprite	*sprite;
  sfText	*speed;
  sfText	*time;
  sfText	*rotation;

  texture = sfTexture_createFromFile(str, NULL);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  speed = print_data(0, font);
  time = print_data(2, font);
  rotation = print_data(1, font);
  sfRenderWindow_clear(win, sfBlack);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  sfRenderWindow_drawText(win, speed, NULL);
  sfRenderWindow_drawText(win, time, NULL);
  sfRenderWindow_drawText(win, rotation, NULL);
  l_b2(win, font, NULL, m);
  sfSprite_destroy(sprite);
  sfTexture_destroy(texture);
  sfText_destroy(speed);
  sfText_destroy(time);
  sfText_destroy(rotation);
  return (texture);
}

int             print_background(sfTexture *texture, sfRenderWindow *win)
{
  sfSprite*     sprite;

  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfRenderWindow_drawSprite(win, sprite, NULL);
  return (0);
}

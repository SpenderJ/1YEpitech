/*
** main.c for rush_scroller in /home/hecto/Rush_Scroller
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Fri Mar 31 20:35:45 2017 blaise carnevillier
** Last update Sun Jun  4 00:29:26 2017 Jules Spender
*/

#include "my_h.h"

sfRenderWindow	*create_win(char *name, int width, int height)
{
  sfRenderWindow	*window;
  sfVideoMode		mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, "Scroller", sfResize | sfClose, NULL);
  if (!window)
    return (NULL);
  return (window);
}

void	mov(sfText *text, sfText *text2, sfText *text3, sfRenderWindow *w, int i)
{
  sfVector2f	v1;
  int		j;

  j = (i >= 0)?(1):(-1);
  v1.x = 0.25 * j;
  v1.y = 0.125 * j;
  sfRenderWindow_clear(w, sfBlack);
  sfRenderWindow_drawText(w, text, NULL);
  sfText_move(text, v1);
  v1.y = 0;
  sfRenderWindow_drawText(w, text2, NULL);
  sfText_move(text2, v1);
  if ((i > 0 && i < 1500) || i < -1500)
    {
      v1.y = 0;
      v1.x = 0.05 * j;
    }
  else
    {
      v1.x = 0;
      v1.y = 0.05 * j;
    }
  sfRenderWindow_drawText(w, text3, NULL);
  sfText_move(text3, v1);
  sfRenderWindow_display(w);
}

void	diagonal(sfText *text, sfText *text2, sfText *text3, sfRenderWindow *window)
{
  int		i;

  i = 1;
  while (i++ <= 3000)
    {
      mov(text, text2, text3, window, i);
    }
  i = -3000;
  while (i++ <= 0)
    {
      mov(text, text2, text3, window, i);
    }
}

sfText	*init_text(char *str, sfFont *font, float angle)
{
  sfText	*text;

  text = sfText_create();
  sfText_setString(text, str);
  sfText_setFont(text, font);
  sfText_setColor(text, sfRed);
  sfText_setCharacterSize(text, 50);
  sfText_setRotation(text, angle);
  return (text);
}

int	text_scroller(char **argv, sfRenderWindow *window, int i, sfMusic *music)
{
  sfText		*text1;
  sfText		*text2;
  sfText		*text3;
  sfFont		*font;
  sfSoundStatus		status;

  if (!(font = sfFont_createFromFile("src/arial.ttf")))
    return (84);
  text1 = init_text("WILLIAM", font, 30);
  text2 = init_text("EST LE ", font, 0);
  text3 = init_text("PLUS BEAU", font, 0);  
  sfRenderWindow_clear(window, sfBlack);
  while (argv[i++] != NULL)
    {
      if (!(music = scroller_music(argv[i - 1])))
	return (84);
      while ((status = sfMusic_getStatus(music)) != sfStopped)
	diagonal(text1, text2, text3, window);
      music_stop(music);
    }
  if (i == 2)
    while (i++ <= 4)
      diagonal(text1, text2, text3, window);
  return (0);
}

/*
** final.c for emacs in /home/david.xu/tek_perso/src
** 
** Made by david xu
** Login   <david.xu@epitech.net>
** 
** Started on  Sun May 28 15:14:57 2017 david xu
** Last update Sun May 28 21:10:47 2017 blaise carnevillier
*/

#include "my_h3.h"

int     do_movefinal(sfEvent event, t_cobble *enigme, sfRenderWindow *win)
{
  if (event.key.code == sfKeyUp)
    return (up_end(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyDown)
    return (down_end(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyRight)
    return (right_end(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyLeft)
    return (left_end(win, "textures/pnggoldé.png", enigme));
  return (0);
}

int     click_final(sfRenderWindow *win, t_cobble *enigme)
{
  sfEvent       event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
	{
	  sfRenderWindow_close(win);
	  return (1);
	}
      else if (event.type == sfEvtKeyPressed)
	return (do_movefinal(event, enigme, win));
    }
  return (84);
}

int		final_enigme(sfRenderWindow *win, t_cobble *enigme)
{
  int           *pos;
  sfTexture*    texture;

  if ((pos = malloc(sizeof(int) * 3)) == NULL)
    return (84);
  pos[0] = 0;
  pos[1] = 0;
  if ((texture = launch_background(win, "texture_enigme/porte_ouverte.png"))
      == NULL)
    return (84);
  while (sfRenderWindow_isOpen(win))
    {
      print_background(texture, win);
      launch_png(win, pos, enigme->x, enigme->y);
      pos[3] = click_final(win, enigme);
      if (pos[3] == 2)
	return (0);
    }
  return (84);
}

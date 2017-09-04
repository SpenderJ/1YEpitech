/*
** map.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Tue May 16 17:17:39 2017 Jules Spender
** Last update Sun May 28 22:31:37 2017 blaise carnevillier
*/

#include "my_h3.h"

int	do_move(sfEvent event, t_cobble *enigme, sfRenderWindow *win)
{
  if (event.key.code == sfKeyUp)
    return (run_up3(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyDown)
    return (run_down3(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyRight)
    return (run_right3(win, "textures/pnggoldé.png", enigme));
  else if (event.key.code == sfKeyLeft)
    return (run_left3(win, "textures/pnggoldé.png", enigme));
  return (0);
}

int     click(sfRenderWindow *win, t_cobble *enigme)
{
  sfEvent       event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
	{
	  sfRenderWindow_close(win);
	  return (1);
	}
      else if (event.type == sfEvtMouseButtonPressed)
	{
	  if (event.mouseButton.x >= 450 && event.mouseButton.x <= 500
	      && event.mouseButton.y >= 180 && event.mouseButton.y <= 220)
	    return (2);
	}
      else if (event.type == sfEvtKeyPressed)
	return (do_move(event, enigme, win));
    }
  return (84);
}

int	map4(sfRenderWindow *win, int *room)
{
  t_cobble	*enigme;
  int           *pos;
  sfTexture*    texture;
  
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (84);
  if ((enigme = malloc(sizeof(t_cobble))) == NULL)
    return (84);
  enigme->x = 405;
  enigme->y = 550;
  pos[0] = 0;
  pos[1] = 0;
  if ((texture = launch_background(win, "texture_enigme/chercher_cle.png"))
      == NULL)
    return (84);
  while (sfRenderWindow_isOpen(win))
    {
      print_background(texture, win);
      launch_png(win, pos, enigme->x, enigme->y);
      if (click(win, enigme) == 2)
	sign3(win, enigme);
    }
  return (84);
}

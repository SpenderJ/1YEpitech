/*
** menu.c for tekadventure in /home/hecto/tekadventure/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sun May 28 09:51:54 2017 blaise carnevillier
** Last update Sun May 28 16:23:53 2017 blaise carnevillier
*/

#include "my_h.h"
#include "map2.h"

int	get_move2_1(sfRenderWindow *win, sfTexture *tex)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed || event.key.code == sfKeyEscape || 
	  (event.mouseButton.x >= 324 && event.mouseButton.x <= 458) &&
	  (event.mouseButton.y >= 332 && event.mouseButton.y <= 388))
	{
	  sfRenderWindow_close(win);
	  exit(0);
	}
      if (event.type == sfEvtMouseButtonPressed)
	{
	  if ((event.mouseButton.x >= 284 && event.mouseButton.x <= 490)&&
		     (event.mouseButton.y >=79 && event.mouseButton.y <= 171))
	    return(1);
	  
	}
    }
  return (0);
}


int	menu(sfRenderWindow *win)
{
  sfMusic       *music;
  sfTexture     *texture;
  int		ret;

  ret = 0;
  if ((music = launch_music("music/gngEndTheme.ogg")) == NULL)
    return (84);
  if ((texture = launch_background(win, "textures/menu.png")) == NULL)
      return (84);
  sfRenderWindow_display(win);
  print_background(texture, win);
  while (ret == 0)
    {
      usleep(10000);
      print_background(texture, win);
      ret = get_move2_1(win, texture);
    }
  return (0);
}

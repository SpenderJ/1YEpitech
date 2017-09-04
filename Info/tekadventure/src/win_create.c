/*
** win_create.c for emacs in /home/jules/Info/tekadventure/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon May 15 13:54:41 2017 Jules Spender
** Last update Mon May 15 13:55:14 2017 Jules Spender
*/

#include "my_h.h"

sfRenderWindow	*create_win(char *name, int width, int height)
{
  sfRenderWindow        *window;
  sfVideoMode           mode;
  
  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, "Scroller", sfResize | sfClose, NULL);
  if (!window)
    return (NULL);
  return (window);
}

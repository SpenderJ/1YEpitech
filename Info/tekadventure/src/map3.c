/*
** main.c for  in /home/Pandarkricci/Semesters/2/Graphical/tekadventure
** 
** Made by Ugo Bensaid
** Login   <ugo.bensaid@epitech.net>
** 
** Started on  Wed Mar 29 13:24:47 2017 ugo bensaid
** Last update Sun May 28 22:49:35 2017 Jules Spender
*/

#include "my.h"

int		loop_game(sfRenderWindow *window, t_collision *collision)
{
  while (sfRenderWindow_isOpen(window))
    {
      sfRenderWindow_clear(window, sfBlack);
      sky(window);
      hills(window);
      ground(window);
      mario(window, collision);
      plane(window, collision);
      balloon(window, collision);
      spoink(window, collision);
      sfRenderWindow_display(window);
    }
  return (0);
}

int			map3(sfRenderWindow *window, int *lvl)
{
  sfVideoMode		mode;
  sfMusic		*music;
  t_collision		collision;

  mode.width = SCRHEIGHT;
  mode.height = SCRWIDTH;
  mode.bitsPerPixel = SCRBPP;
  if ((!(music = sfMusic_createFromFile("music/Faine-Klub-Pulse.ogg"))))
    return (84);
  sfMusic_play(music);
  loop_game(window, &collision);
  sfMusic_destroy(music);
  sfRenderWindow_destroy(window);
  *lvl = *lvl + 1;
  return (0);
}

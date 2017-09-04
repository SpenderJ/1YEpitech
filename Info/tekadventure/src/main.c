/*
** main.c for scroller in /home/hecto/Rush_Scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 17:07:15 2017 blaise carnevillier
** Last update Sun May 28 19:10:15 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  int			i;
  sfRenderWindow	*win;
  sfMusic		*music;

  i = 0;
  if (!(win = create_win("Tekadventure", 800, 600)))
    return (84);
  menu(win);
  if ((i = launch_game(win, argc, argv)) == 84)
    return (84);
  return (0);
}

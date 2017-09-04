/*
** main.c for scroller in /home/hecto/Rush_Scroller/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Apr  1 17:07:15 2017 blaise carnevillier
** Last update Sun Apr  2 23:04:12 2017 Jules Spender
*/

#include "my_h.h"

int	main(int argc, char **argv)
{
  int			ret;
  sfRenderWindow	*win;
  sfMusic		*music;
  int			i;

  i = 0;
  if (!(win = create_win("scroller", 800, 600)))
    return (84);
  if ((ret = text_scroller(argv, win, 1, music)) == 84)
    return (84);
  sfRenderWindow_clear(win, sfBlack);
  if ((ret = background(win)) == 84)
    return (84);
  return (0);
}

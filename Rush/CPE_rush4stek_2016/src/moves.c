/*
** move.c for r4s in /home/hecto/r4s/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Sat Jun  3 10:17:04 2017 blaise carnevillier
** Last update Sun Jun  4 22:51:27 2017 blaise carnevillier
*/

#include "../includes/n4s.h"

void	forward(t_move *m)
{
  if (m->t < 1)
    m->t += 0.1;
  my_putstr("car_forward:");
  printfloat(m->t);
  get_next_line(0);
}

void	backwards(t_move *m)
{
  if (m->t <= 0)
    {
      m->t += 0.1;
     my_putstr("car_backwards:");
     printfloat(m->t);
    }
  else
    {
      m->t -= 0.1;
      my_putstr("car_forward:");
      printfloat(m->t);
    }
    get_next_line(0);
}

void	dir(int	i, t_move *m)
{
  if (m->r != i)
    {
      m->r = m->r + (0.1 * i);
      my_printf("wheels_dir:");
      printfloat(m->r);
      get_next_line(0);
    }
}

int	moves(t_move *m, sfRenderWindow *win, sfFont *font)
{
  int	ret;

  ret = get_event(win);
  if (ret == 0)
    forward(m);
  if (ret == -1)
    backwards(m);
  if (ret == 1)
    {
      dir(1, m);
      l_b(win, "textures/a.png", font, m);
      usleep(66666);
    }
  if (ret == 2)
    {
      dir(-1, m);
      l_b(win, "textures/b.png", font, m);
      usleep(66666);
    }
  return (0);
}

int	get_event(sfRenderWindow *win)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(win, &event))
    {
      if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
	{
	  sfRenderWindow_close(win);
	  my_putstr("stop_simulation\n");
	  exit(0);
	}
      if (event.type == sfEvtKeyPressed)
	{
	  if (event.key.code == sfKeyUp)
	    return (0);
	  else if (event.key.code == sfKeyDown)
	    return (-1);
	  else if (event.key.code == sfKeyRight)
	    return (2);
	  else if (event.key.code == sfKeyLeft)
	    return (1);
	}
    }
  return (4);
}

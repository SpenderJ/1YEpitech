/*
** main.c for n4s in /home/hecto/Need4Stek/srcs
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Tue May 30 23:58:24 2017 blaise carnevillier
** Last update Sun Jun  4 22:50:50 2017 blaise carnevillier
*/

#include "../includes/n4s.h"
#include "getnextline.h"

char	*check_str(char *str)
{
  int	i;
  int	y;
  char	*new;

  y = 0;
  i = 0;
  if (!(new = malloc(sizeof(char) * 300)))
    return (NULL);
  while (i != 3 && str[y] != 0)
    if (str[y++] == ':')
      i++;
  i = 0;
  while (str[y] != 0 && ((str[y] >= '0' && str[y] <= '9')
			 || str[y] == '.' || str[y] == ':'\
			 || str[y] == '-'))
    new[i++] = str[y++];
  new[i - 1] = '\0';
  return (new);
}

int	lets_go(t_move *m, sfFont *font, sfRenderWindow *win)
{
  char		*str;
  int		ret;

  ret = 0;
  while (ret != 84)
    {
      l_b(win, "textures/background.png", font, m);
      str = check_str(str);
      usleep(66666);
      ret = moves(m, win, font);
    }
  return (0);
}

int	main()
{
  sfRenderWindow	*win;
  t_move		*m;
  sfVideoMode		mode;
  sfFont		*font;

  if ((m = malloc(sizeof(t_move))) == NULL)
    return (84);
  my_printf("start_simulation\n");
  get_next_line(0);
  m->t = 0;
  m->r = 0;
  if ((m->lap = malloc(sizeof(char) * 3)) == NULL)
    return (84);
  m->lap[0] = 48;
  mode.width = 1300;
  mode.height = 668;
  mode.bitsPerPixel = 32;
  win = sfRenderWindow_create(mode, "r4s", sfResize | sfClose, NULL);
  if (!win || (!(font = sfFont_createFromFile("src/arial.ttf"))))
      return (84);
  lets_go(m, font, win);
  return (0);
}

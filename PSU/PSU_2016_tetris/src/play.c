/*
** play.c for tetris in /home/hecto/PSU_2016_tetris/src
** 
** Made by blaise carnevillier
** Login   <hecto@epitech.net>
** 
** Started on  Thu Mar  9 13:26:59 2017 blaise carnevillier
** Last update Wed Mar 22 11:20:35 2017 blaise carnevillier
*/

#include "my_h.h"

char	**errase_line(char **tab, int i)
{
  int	y;
  
  while (i > 0)
    {
      y = 0;
      while (tab[i][y] != '\0')
	{
	  tab[i][y] = tab[i - 1][y];
	  if (i == 1)
	    tab[i - 1][y] = '.';
	  y++;
	}
      i--;
    }
  return (tab);
}

char	**check_line(char **tab, t_info *info)
{
  int	i;
  int	y;
  int	b;

  i = 0;
  while (tab[i] != NULL)
    {
      b = 0;
      y = 0;
      while (tab[i][y + 1] != '\0')
	if (tab[i][y++] != '*')
	  b = 1;
      if (b == 0)
	tab = errase_line(tab, i);
      i++;
    }
  return (tab);
}

char	**new_t_tab(char **t_tab, char **next, char **tab, t_info *info)
{
  t_tab = clear_t_tab(info);
  t_tab = put_tetriminos(t_tab, next, tab, info);
  return (t_tab);
}

int	increase_score(t_info *info, int b)
{
  if (b == 0)
    info->score += 45;
  else if (b == 1)
    info->score += 65;
  else
    info->score += 300;
  if (info->score / 1000 > info->level - 1 )
    {
      info->level += 1;
      if (info->speed >= 500)
	info->speed -= 100;
      else if (info->speed >= 100)
	info->speed -= 50;
      else
	info->speed -= 10;
    }
  return (1);
}
int	lets_play(char **tab, char **next, t_info *info, char ***mc)
{
  char	**t_tab;

  initscr();
  raw();
  noecho();
  timeout(info->speed);
  keypad(stdscr, TRUE);
  win_size(info);
  while (1)
    {
      if (info->new == 1)
	{
	  check_line(tab, info);
	  info->new = 0;
	  next = choose_nxt(mc, 0, 0, 0);
	  t_tab = new_t_tab(t_tab, next, tab, info);
	}
      clear();
      tab = get_moves(t_tab, tab);
      display(info, tab, next);
      tab = movement(t_tab, tab, info);
      if (info->new == 1)
	info->new = increase_score(info, 1);
      if (info->new != 1)
	if ((t_tab = t_tab_down(t_tab, t_tab, tab, info)) == NULL)
	  info->new = increase_score(info, 0);
    }
}

int	init_play(t_info *info, char ***mc)
{
  char	**tab;
  char	**next;
  int	i;
  int	y;

  i = -1;
  if (!(tab = malloc(sizeof(char*) * info->mapsizerow)) || \
      (!(next = malloc(sizeof(char*) * 5))))
    return (84);
  while (++i < info->mapsizerow)
    {
      y = -1;
      if (!(tab[i] = malloc(sizeof(char) * info->mapsizecol-1)))
	return (84);
      if (i < 4)
	  if (!(next[i] = malloc(sizeof(char) * 5)))
	    return (84);
      while (++y <= info->mapsizecol)
	{
	  tab[i][y] = '.';
	  if (y < 4 && i < 4)
	    next[i][y] = '.';
	}
    }
  return (lets_play(tab, next, info, mc));
}
